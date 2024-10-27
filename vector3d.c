#include "vector3d.h"

void vector_sum(const vector3d_t *v1, const vector3d_t *v2,vector3d_t *out) {
    
    out->x = v1->x + v2->x;
    out->y = v1->y + v2->y;
    out->z = v1->z + v2->z;
    
}

void vector_sub(const vector3d_t *v1, const vector3d_t *v2,vector3d_t *out) {
    
    out->x = v1->x - v2->x;
    out->y = v1->y - v2->y;
    out->z = v1->z - v2->z;
    
}

double vector_dot(const vector3d_t *v1, const vector3d_t *v2) {
    return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

void vector_cross(const vector3d_t *v1, const vector3d_t *v2,vector3d_t *out) {
    
    out->x = v1->y * v2->z - v1->z * v2->y;
    out->y = v1->z * v2->x - v1->x * v2->z;
    out->z = v1->x * v2->y - v1->y * v2->x;
    
}//
// Created by Anton on 18.10.2024.
//
