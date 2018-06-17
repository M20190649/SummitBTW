using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Lane
{
    private string _id;
    private List<LineRenderer> _lines;

    public Lane(string id)
    {
        _id = id;
        _lines = new List<LineRenderer>();
    }

    public string getId()
    {
        return _id;
    }

    public void addLine(LineRenderer l)
    {
        _lines.Add(l);
    }

    public List<LineRenderer> getLines()
    {
        return _lines;
    }

}