using UnityEngine;
using System;
using System.Collections;
using System.Xml;
using System.Linq;
using System.Collections.Generic;

public class Vehicle : MonoBehaviour
{

    public string id;
    public float x;
    public float y;
    public float angle;
    public double speed;
    public bool visited;

    //update this car's information based on the node data
    public void updateCarPosition(float x, float y, float angle, double speed)
    {
        //NOTE: when moving on the y axis, we actually move the car's on the z for 3D perspective
        //rotate car's direction
        changeOrientation(x, y, angle, speed);

        //update data
        this.x = x;
        this.y = y;
        this.angle = angle;
        this.speed = speed;
        this.visited = true;

        transform.position = new Vector3(x, 2.0f, y);
    }

    //rotate the car to examine it's next destination
    void changeOrientation(float x, float y, float angle, double speed)
    {
        if (this.x != x &&
            this.y != y)
        {
            transform.LookAt(new Vector3(x,
                                           2.0f,
                                           y));
        }
        else if (this.x != x)
        {
            transform.LookAt(new Vector3(x, 2.0f, this.y));
        }

        else if (this.y != y)
        {
            transform.LookAt(new Vector3(this.x, 2.0f, y));
        }
    }

    //move the cars on their own from currentPosition to next
    //void Update()
    //{
    //    float step = 10f*Time.deltaTime;

    //    transform.position = Vector3.MoveTowards(transform.position,
    //                                                 new Vector3(x, 0.8f, y),
    //                                                 step);
    //}

}