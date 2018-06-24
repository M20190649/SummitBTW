using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Junction {
    private string _id;
    private List<string> _intLanes;

    public Junction(string id, string intLanes)
    {
        _id = id;
        _intLanes = new List<string>(intLanes.Split(' '));
    }

    public string getId()
    {
        return _id;
    }

    public List<string> getLanes()
    {
        return _intLanes;
    }

}