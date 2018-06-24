using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using AssemblyCSharp.Assets.Scripts;
using UnityEditor;

public class MapAndSimulationChangeButton : MonoBehaviour {

    public MapXmlParser m_mapXmlParser;
    public SimulationXmlParser m_simXmlParser;

    public Dropdown m_mapDropdown;
    public Dropdown m_simDropdown;

    //public VideoPlayer videoPlayer;
    //public Text loadingText;

    // Use this for initialization
    void Start () {
        
        Button btn = GetComponent<Button>();
        btn.onClick.AddListener(onClick);
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

    public void onClick()
    {
        StreamingAssetsGetter getter = new StreamingAssetsGetter(
            m_mapDropdown.options[m_mapDropdown.value].text,
            (AlgorithmType)m_simDropdown.value
        );
        StartCoroutine(getter.DownloadMap(m_mapXmlParser.parseMap));
        StartCoroutine(getter.DownloadSim(m_simXmlParser.parseSimulation));
    }
	
	// Update is called once per frame
	void Update () {
        if (m_mapXmlParser.parseCalled &&
           m_simXmlParser.parseCalled)
        {
            m_mapXmlParser.parseCalled = false;
            m_simXmlParser.parseCalled = false;
        }          
	}
}
