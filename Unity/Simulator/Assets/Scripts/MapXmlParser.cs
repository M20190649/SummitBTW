using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Xml;
using UnityEngine;

public class MapXmlParser : MonoBehaviour {

    public GameObject roadObject;
    public GameObject junctionObject;
    public LineRenderer roadLines;
    public GameObject quad;

    public List<Lane> lanes;
    public List<Junction> junctions;

    private MeshFilter mf;

    void Start() {
        mf = quad.GetComponent<MeshFilter>();

        lanes = new List<Lane>();
        junctions = new List<Junction>();
    }

    public void parseMap(string map) {
        XmlDocument doc = new XmlDocument();
        //doc.Load(path);
        //XmlReader xmlDownloaded = new XmlTextReader(path);
        doc.LoadXml(map);
        //doc.LoadXml(StreamingAssetsGetter.LoadStreamingAsset("city.net.xml"));
        InitializeJunctionsAsMesh(doc);
        InitializeLanesAsLines(doc);
        //InitializeLanes(doc);
        //InitializeJunctions(doc);
    }

    void InitializeLanesAsLines(XmlDocument doc)
    {
        //XmlNode location = doc.GetElementsByTagName("location")[0];
        //Vector3 offset = new Vector3(float.Parse(location.Attributes["netOffset"].Value.Split(',')[0]), 0.0f, float.Parse(location.Attributes["netOffset"].Value.Split(',')[1]));
        Vector3 offset = Vector3.zero;
        XmlNodeList edgeNodes = doc.GetElementsByTagName("edge");
        bool first = true;
        foreach (XmlNode edgeNode in edgeNodes)
        {
            float y = 0.0f;
            if (edgeNode.Attributes["function"] != null)
                y = 1.0f;
            XmlNodeList laneNodes = edgeNode.ChildNodes;
            foreach (XmlNode laneNode in laneNodes)
            {
                List<Vector3> shapeVectors = new List<Vector3>();
                string shape = laneNode.Attributes["shape"].Value;
                string[] points = shape.Split(' ');
                foreach (string p in points)
                {
                    string[] axis = p.Split(',');
                    shapeVectors.Add((new Vector3(float.Parse(axis[0]), y, float.Parse(axis[1])) - offset));// / 50);
                    if (first)
                    {
                        Camera.main.transform.position = new Vector3(float.Parse(axis[0]), 10.0f, float.Parse(axis[1]));
                        first = false;
                    }
                }
                Lane lane = new Lane(laneNode.Attributes["id"].Value);
                for (int i = 0; i < shapeVectors.Count - 1; i++)
                {
                    roadLines.SetPositions(new Vector3[] { shapeVectors[i], shapeVectors[i + 1] });
                    LineRenderer laneLine = Instantiate(roadLines) as LineRenderer;
                    if (edgeNode.Attributes["function"] != null)
                    {
                        laneLine.startWidth = 0.5f;
                        laneLine.endWidth = 0.5f;
                    }
                    lane.addLine(laneLine);
                }
                lanes.Add(lane);
            }
        }
    }

    void InitializeJunctionsAsMesh(XmlDocument doc)
    {
        //XmlNode location = doc.GetElementsByTagName("location")[0];
        //Vector3 offset = new Vector3(float.Parse(location.Attributes["netOffset"].Value.Split(',')[0]), 0.0f, float.Parse(location.Attributes["netOffset"].Value.Split(',')[1]));
        Vector3 offset = Vector3.zero;
        XmlNodeList juncNodes = doc.GetElementsByTagName("junction");
        foreach (XmlNode juncNode in juncNodes)
        {
            //if (juncNode.Attributes["type"].Value == "dead_end")
            //    continue;
            //Vector3 pos = (new Vector3(float.Parse(juncNode.Attributes["x"].Value), 0.0f, float.Parse(juncNode.Attributes["y"].Value)) - offset) / 50;
            List<Vector3> shapeVectors = new List<Vector3>();
            XmlAttribute shapeAttr = juncNode.Attributes["shape"];
            if (null == shapeAttr)
                continue;
            string shape = shapeAttr.Value;
            string[] points = shape.Split(' ');
            foreach (string p in points)
            {
                string[] axis = p.Split(',');
                shapeVectors.Add((new Vector3(float.Parse(axis[0]), 0.0f, float.Parse(axis[1])) - offset));// / 50);
            }
            //junctionObject.transform.localScale = new Vector3(0.5f, 1, 0.5f);
            Vector3 baseVector = shapeVectors[0];
            Mesh mesh = new Mesh();
            mf.mesh = mesh;
            mesh.vertices = shapeVectors.ToArray();
            List<int> tri = new List<int>();
            for (int i = 1; i < shapeVectors.Count - 1; i++)
            {
                tri.Add(0);
                tri.Add(i);
                tri.Add(i + 1);
            }
            mesh.triangles = tri.ToArray();
            mesh.normals = Enumerable.Repeat(-Vector3.up, shapeVectors.Count).ToArray();
            Instantiate(quad);
            if(juncNode.Attributes["intLanes"].Value != "")
            {
                junctions.Add(new Junction(juncNode.Attributes["id"].Value, juncNode.Attributes["intLanes"].Value));
            }
        }
    }

    void InitializeJunctionsAsLines(XmlDocument doc)
    {
        XmlNode location = doc.GetElementsByTagName("location")[0];
        Vector3 offset = new Vector3(float.Parse(location.Attributes["netOffset"].Value.Split(',')[0]), 0.0f, float.Parse(location.Attributes["netOffset"].Value.Split(',')[1]));
        XmlNodeList juncNodes = doc.GetElementsByTagName("junction");
        foreach (XmlNode juncNode in juncNodes)
        {
            if (juncNode.Attributes["type"].Value == "dead_end")
                continue;
            //Vector3 pos = (new Vector3(float.Parse(juncNode.Attributes["x"].Value), 0.0f, float.Parse(juncNode.Attributes["y"].Value)) - offset) / 50;
            List<Vector3> shapeVectors = new List<Vector3>();
            XmlAttribute shapeAttr = juncNode.Attributes["shape"];
            if (null == shapeAttr)
                continue;
            string shape = shapeAttr.Value;
            string[] points = shape.Split(' ');
            foreach (string p in points)
            {
                string[] axis = p.Split(',');
                shapeVectors.Add((new Vector3(float.Parse(axis[0]), 0.0f, float.Parse(axis[1])) - offset));// / 50);
            }
            //junctionObject.transform.localScale = new Vector3(0.5f, 1, 0.5f);
            for (int j = 1; j <= shapeVectors.Count - 1; j++)
            {
                for (int i = 0; i < shapeVectors.Count - j; i++)
                {
                    roadLines.SetPositions(new Vector3[] { shapeVectors[i], shapeVectors[i + j] });
                    Instantiate(roadLines);
                }
            }
        }
    }

}
