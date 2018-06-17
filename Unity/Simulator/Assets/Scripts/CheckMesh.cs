using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckMesh : MonoBehaviour {

    private MeshFilter mf;

	// Use this for initialization
	void Start () {
        mf = GetComponent<MeshFilter>();
        Mesh mesh = new Mesh();
        mf.mesh = mesh;

        Vector3[] vertices = new Vector3[4];
        vertices[0] = new Vector3(0, 0, 0);
        vertices[1] = new Vector3(10, 0, 0);
        vertices[2] = new Vector3(0, 0, 10);
        vertices[3] = new Vector3(10, 0, 10);

        mesh.vertices = vertices;

        int[] tri = new int[6];

        tri[0] = 0;
        tri[1] = 2;
        tri[2] = 1;
        tri[3] = 2;
        tri[4] = 3;
        tri[5] = 1;

        mesh.triangles = tri;

        Vector3[] normals = new Vector3[4];

        normals[0] = -Vector3.up;
        normals[1] = -Vector3.up;
        normals[2] = -Vector3.up;
        normals[3] = -Vector3.up;

        mesh.normals = normals;

        /*Vector2[] uv = new Vector2[4];
        uv[0] = new Vector2(0, 0);
        uv[1] = new Vector2(1, 0);
        uv[2] = new Vector2(0, 1);
        uv[3] = new Vector2(1, 1);

        mesh.uv = uv;*/
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
