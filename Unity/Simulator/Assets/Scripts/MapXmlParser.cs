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

    public bool parseCalled = false;

    private MeshFilter mf;

    void Start() {
        mf = quad.GetComponent<MeshFilter>();

        lanes = new List<Lane>();
        junctions = new List<Junction>();
    }

    public void parseMap(string map) {
        XmlDocument doc = new XmlDocument();
        doc.LoadXml(map);
        parseCalled = true;
        InitializeJunctionsAsMesh(doc);
        InitializeLanesAsLines(doc);
    }

    void InitializeLanesAsLines(XmlDocument doc)
    {
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
                    shapeVectors.Add(new Vector3(float.Parse(axis[0]), y, float.Parse(axis[1])));
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
        XmlNodeList juncNodes = doc.GetElementsByTagName("junction");
        foreach (XmlNode juncNode in juncNodes)
        {
            List<Vector3> shapeVectors = new List<Vector3>();
            XmlAttribute shapeAttr = juncNode.Attributes["shape"];
            if (null == shapeAttr)
                continue;
            string shape = shapeAttr.Value;
            string[] points = shape.Split(' ');
            foreach (string p in points)
            {
                string[] axis = p.Split(',');
                shapeVectors.Add(new Vector3(float.Parse(axis[0]), 0.0f, float.Parse(axis[1])));
            }
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
}
