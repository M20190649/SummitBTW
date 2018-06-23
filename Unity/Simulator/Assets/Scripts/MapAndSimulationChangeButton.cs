using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapAndSimulationChangeButton : MonoBehaviour {

    public MapXmlParser m_mapXmlParser;
    public SimulationXmlParser m_simXmlParser;

    public Dropdown mapDropdown;
    public Dropdown simDropdown;

    // Use this for initialization
    void Start () {
		
	}

    /*string getPathFromType(AlgorithmChooser.AlgorithmType type)
    {
        string finalPath = "";
        string[] pathArray = MapChooser.mapPath.Split('/');
        string mapName = pathArray[pathArray.Length - 1];
        pathArray[pathArray.Length - 1] = mapName.Split('.')[0] + "_full_output.xml";
        foreach(string part in pathArray)
        {
            finalPath += part + '/';
        }
        Debug.Log(finalPath.Substring(0, finalPath.Length - 1));
        return finalPath.Substring(0, finalPath.Length - 1);
    }*/

    private string getMap()
    {
        switch(mapDropdown.value)
        {
            case 1:
                return Maps.CITY;
            case 2:
                return Maps.BIG_CITY;
            default:
                return Maps.CROSS;
        }
    }

    private string getSim()
    {
        switch (mapDropdown.value)
        {
            case 1:
                return Simulations.CITY_DYNAMIC;
            case 2:
                return Simulations.BIG_CITY_DYNAMIC;
            default:
                return Simulations.CITY_DYNAMIC;
        }
    }

    public void onClick()
    {
        m_mapXmlParser.parseMap(getMap());

        m_simXmlParser.parseSimulation(getSim());
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
