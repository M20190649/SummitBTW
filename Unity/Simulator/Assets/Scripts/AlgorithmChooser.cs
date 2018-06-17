using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class AlgorithmChooser : MonoBehaviour {

    private Dropdown m_dropDown;

    public static AlgorithmType algorithmType = AlgorithmType.NULL;

    public enum AlgorithmType {
        NULL = 0,
        STATIC,
        MAX_OCCUPANCY,
        DYNAMIC,
    }

	// Use this for initialization
	void Start () {
        this.m_dropDown = GetComponent<Dropdown>();
        this.m_dropDown.options.Add(new Dropdown.OptionData("Choose Algorithm:"));
        var enumValues = Enum.GetValues(typeof(AlgorithmType)).Cast<AlgorithmType>();
        for (int i = 1; i < enumValues.Count(); ++i)
        {
            this.m_dropDown.options.Add(
                new Dropdown.OptionData(
                    enumValues.ElementAt(i).ToString().Replace('_', ' ')
                )
            );
        }
    }

    public void onChange()
    {
        AlgorithmChooser.algorithmType = (AlgorithmType) m_dropDown.value;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
