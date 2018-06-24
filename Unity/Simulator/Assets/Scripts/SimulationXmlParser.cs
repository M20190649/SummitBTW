using System.Collections;
using System.Collections.Generic;
using System.Xml;
using UnityEngine;
using System;
using UnityEngine.UI;

public class SimulationXmlParser : MonoBehaviour {

    public List<GameObject> activeCars; //contains all cars currently in the scene
    public GameObject carModel1;
    public GameObject carModel2;

    public Button playButton, nextButton;

    public GameObject cityParser;

    private float mouseSensitivity;

    XmlNodeList nodeList;   //contain every time frame of the simulation in a node list
    int readTime = -1;      //current timespace
    private Vector3 offset = Vector3.zero;

    private XmlDocument doc = new XmlDocument();
    //private XmlReader xmlDownloaded;

    // Begin XML reading as soon as simulation begins
    public void parseSimulation(string sim)
    {
        //open and load the file
        //doc.Load(simPath);
        doc.LoadXml(sim);
        //XmlDocument mapDoc = new XmlDocument();
        //mapDoc.Load(mapPath);
        //doc.Load(new XmlTextReader(mapPath));
        //XmlNode location = mapDoc.GetElementsByTagName("location")[0];
        //offset = new Vector3(float.Parse(location.Attributes["netOffset"].Value.Split(',')[0]), 0.0f, float.Parse(location.Attributes["netOffset"].Value.Split(',')[1]));

        nodeList = doc.GetElementsByTagName("data");

        float camSize = 50;
        Camera.main.orthographicSize = camSize;
        mouseSensitivity = 15;

        Button play = playButton.GetComponent<Button>();
        play.onClick.AddListener(playSimulation);

        Button next = nextButton.GetComponent<Button>();
        next.onClick.AddListener(readXml);
    }

    void playSimulation()
    {
        //start reading nodes, repeat every 0.2 seconds
        InvokeRepeating("readXml", 0, 0.2f);

        Button play = playButton.GetComponent<Button>();
        play.onClick.RemoveAllListeners();
        play.onClick.AddListener(stopSimulation);

        Text btnText = playButton.GetComponentInChildren<Text>();
        btnText.text = "Stop";
    }

    void stopSimulation()
    {
        CancelInvoke("readXml");

        Button play = playButton.GetComponent<Button>();
        play.onClick.RemoveAllListeners();
        play.onClick.AddListener(playSimulation);

        Text btnText = playButton.GetComponentInChildren<Text>();
        btnText.text = "Play";
    }


    //read a node in the xml file	
    void readXml()
    {
        readTime++;     //starts at 0 seconds

        //validate each car's existance
        foreach (GameObject c in activeCars)
            c.GetComponent<Vehicle>().visited = false;

        readTimeStep();

        //delete any cars not in latest node
        deleteObjects();
    }

    void readTimeStep()
    {
        int count = 0;
        foreach (XmlNode node in nodeList) //foreach timestep
        {
            //check if we are at the right time in simulation
            if (count == readTime)
            {
                XmlNodeList vehicleNode = node.SelectSingleNode("vehicles").ChildNodes;
                foreach (XmlNode nn in vehicleNode) //update each vehicle in that timestep
                {
                    determineCar(nn);
                }

                XmlNodeList tlsNodes = node.SelectSingleNode("tls").ChildNodes;
                foreach (XmlNode nn in tlsNodes)
                {
                    determineLight(nn);
                }
                break;  //done this timestep
            }
            else
                count++;
        }
    }

    //determine if the current car is already in the scene
    void determineCar(XmlNode curNode)
    {
        GameObject car = alive(curNode);
        //update a car
        if (car)
        {

            car.GetComponent<Vehicle>().updateCarPosition(
                (float.Parse(curNode.Attributes["x"].Value) - offset.x),// / 50,
                (float.Parse(curNode.Attributes["y"].Value) - offset.z),// / 50,
                float.Parse(curNode.Attributes["angle"].Value),
                Convert.ToDouble(curNode.Attributes["speed"].Value)
            );
        }
        //if not in the scene, create and add a new car
        else
        {
            //create the car on the scene view
            car = Instantiate(getCarData(curNode),
                               (new Vector3(float.Parse(curNode.Attributes["x"].Value), 2.0f, float.Parse(curNode.Attributes["y"].Value)) - offset),// / 50,
                               new Quaternion(0, 0, 0, 0)) as GameObject;

            //add new car to list
            activeCars.Add(car);
        }
    }

    void determineLight(XmlNode curNode)
    {
        string id = curNode.Attributes["id"].Value;
        string state = curNode.Attributes["state"].Value;

        Junction j = cityParser.GetComponent<MapXmlParser>().junctions.Find(x => x.getId() == id);
        List<string> juncLanes = j.getLanes();

        List<Lane> lanes = cityParser.GetComponent<MapXmlParser>().lanes;

        int i = 0;
        foreach(string l in juncLanes)
        {
            Color color;
            switch(state[i])
            {
                case 'G':
                    color = Color.green;
                    break;
                case 'g':
                    color = new Color(0, 77, 3);
                    break;
                case 'y':
                    color = Color.yellow;
                    break;
                default:
                    color = Color.red;
                    break;
            }

            i += 1;

            Lane lane = lanes.Find(x => x.getId() == l);
            foreach(LineRenderer lr in lane.getLines())
            {
                lr.material.color = color;
            }
        }

    }

    //create a new car gameObject and fill it's information based on the xml element
    GameObject getCarData(XmlNode curNode)
    {
        //load random car color prefab
        System.Random rnd = new System.Random();
        GameObject car;

        //1 = orange car
        if (rnd.Next(1, 3) == 1)
            car = carModel1;
        //2 = purple car
        else
            car = carModel2;

        //add data from element
        car.GetComponent<Vehicle>().id = curNode.Attributes["id"].Value;
        car.GetComponent<Vehicle>().x = (float.Parse(curNode.Attributes["x"].Value) - offset.x);// / 50;
        car.GetComponent<Vehicle>().y = (float.Parse(curNode.Attributes["y"].Value) - offset.z);// / 50;
        car.GetComponent<Vehicle>().angle = float.Parse(curNode.Attributes["angle"].Value);
        car.GetComponent<Vehicle>().speed = Convert.ToDouble(curNode.Attributes["speed"].Value);
        car.GetComponent<Vehicle>().visited = true;

        return car;
    }

    //return the currentNode's car from the active list
    //returns null if it doesn't exist
    GameObject alive(XmlNode curNode)
    {
        foreach (GameObject c in activeCars)
        {
            if (curNode.Attributes["id"].Value == c.GetComponent<Vehicle>().id)
            {
                return c;
            }
        }
        return null;
    }

    //delete any finished cars
    void deleteObjects()
    {
        List<GameObject> savedItems = new List<GameObject>();

        foreach (GameObject c in activeCars)
        {
            if (c.GetComponent<Vehicle>().visited)
            {
                savedItems.Add(c);
            }
            //if it wasn't visited, delete it from scene
            else
            {
                Destroy(c);
            }
        }

        //update the list
        activeCars = savedItems;
    }

    void Update()
    {
        //Camera Zoom
        float camSize = Camera.main.orthographicSize;
        camSize += Input.GetAxis("Mouse ScrollWheel") * -mouseSensitivity;
        camSize = Mathf.Clamp(camSize, 1.0f, 10000.0f);
        Camera.main.orthographicSize = camSize;

        //Camera Move
        float horizontalSpeed = 40.0f;
        float verticalSpeed = 40.0f;
        if (Input.GetButton("Fire1"))
        {
            float h = -horizontalSpeed * Input.GetAxis("Mouse Y");
            float v = -verticalSpeed * Input.GetAxis("Mouse X");
            Camera.main.transform.Translate(v, h, 0);
        }
    }

}
