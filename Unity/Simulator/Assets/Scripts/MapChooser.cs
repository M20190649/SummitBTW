using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MapChooser : MonoBehaviour, IPointerClickHandler {

    public static string mapPath = null;

    InputField m_InputField;

    public void OnPointerClick(PointerEventData eventData)
    {
        string mapPath = EditorUtility.OpenFilePanel("Choose a Map", "", "net.xml");
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
