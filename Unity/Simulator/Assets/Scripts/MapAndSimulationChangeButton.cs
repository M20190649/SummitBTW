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

    private Button btn;

    public GameObject playerControls;
    public VideoPlayer loading;

    // Use this for initialization
    void Start () {
        loading.Prepare();
        btn = GetComponent<Button>();
        btn.onClick.AddListener(onClick);
	}

    public void onClick()
    {
        StreamingAssetsGetter getter = new StreamingAssetsGetter(
            m_mapDropdown.options[m_mapDropdown.value].text,
            (AlgorithmType)m_simDropdown.value
        );

        m_mapDropdown.interactable = false;
        m_simDropdown.interactable = false;
        btn.interactable = false;
        loading.Play();

        StartCoroutine(getter.DownloadMap(m_mapXmlParser.parseMap));
        StartCoroutine(getter.DownloadSim(m_simXmlParser.parseSimulation));
    }
	
	// Update is called once per frame
	void Update () {
        if (m_mapXmlParser.parseCalled &&
           m_simXmlParser.parseCalled)
        {
            loading.Stop();
            Instantiate(playerControls);
            m_mapXmlParser.parseCalled = false;
            m_simXmlParser.parseCalled = false;
        }
	}
}
