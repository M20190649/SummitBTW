using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Xml;
using System.IO;

public class MapChooser : MonoBehaviour, IPointerClickHandler {

    public static string mapPath = null;

    InputField m_InputField;

    public void OnPointerClick(PointerEventData eventData)
    {
        
        Debug.Log("Path : " + Application.dataPath);

        Debug.Log("d1: " + File.Exists(@"D:\home\site\wwwroot\simulator\examples\data\New_York\New_York.net.xml"));
        Debug.Log("d2: " + File.Exists("D:/home/site/wwwroot/simulator/examples/data/New_York/New_York.net.xml"));
        Debug.Log("d3: " + File.Exists("/Users/eylonsho/Nextcloud/Technion/YearlyProject/SummitBTW/simulator/examples/data/New_York/New_York.net.xml"));
        Debug.Log("list files: " + Directory.GetFiles("."));
        //string mapPath = "D:/home/site/wwwroot/simulator/examples/data/New_York/New_York.net.xml";

        //string mapPath = "D:\\home\site\wwwroot\simulator\\examples\\data\\New_York\\New_York.net.xml";
        string mapPath = "/Users/eylonsho/Nextcloud/Technion/YearlyProject/SummitBTW/simulator/examples/data/New_York/New_York.net.xml";
        string[] path = mapPath.Split('/');
        m_InputField.text = path[path.Length - 1];
        MapChooser.mapPath = mapPath;
    }

    // Use this for initialization
    void Start () {
        this.m_InputField = GetComponent<InputField>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
