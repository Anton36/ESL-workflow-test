#include "vector3d.h"

vector3D sum(vector3D v1, vector3D v2) {
    vector3D res;
    res.x = v1.x + v2.x;
    res.y = v1.y + v2.y;
    res.z = v1.z + v2.z;
    return res;
}

vector3D sub(vector3D v1, vector3D v2) {
    vector3D res;
    res.x = v1.x - v2.x;
    res.y = v1.y - v2.y;
    res.z = v1.z - v2.z;
    return res;
}

double dot(vector3D v1, vector3D v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

vector3D cross(vector3D v1, vector3D v2) {
    vector3D res;
    res.x = v1.y * v2.z - v1.z * v2.y;
    res.y = v1.z * v2.x - v1.x * v2.z;
    res.z = v1.x * v2.y - v1.y * v2.x;
    return res;
}//
// Created by Anton on 18.10.2024.
//
