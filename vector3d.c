#include "vector3d.h"

void sum(const vector3d *v1, const vector3d *v2,vector3d *out) {
    
    out->x = v1->x + v2->x;
    out->y = v1->y + v2->y;
    out->z = v1->z + v2->z;
    
}

void sub(const vector3d *v1, const vector3d *v2,vector3d *out) {
    
    out->x = v1->x - v2->x;
    out->y = v1->y - v2->y;
    out->z = v1->z - v2->z;
    
}

double dot(const vector3d *v1, const vector3d *v2) {
    return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

void cross(const vector3d *v1, const vector3d *v2,vector3d *out) {
    
    out->x = v1->y * v2->z - v1->z * v2->y;
    out->y = v1->z * v2->x - v1->x * v2->z;
    out->z = v1->x * v2->y - v1->y * v2->x;
    
}//
// Created by Anton on 18.10.2024.
//
