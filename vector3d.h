#ifndef VECTOR3D_H
#define VECTOR3D_H
typedef struct {
    double x;
    double y;
    double z;
} vector3D;


vector3D sum(vector3D a, vector3D b);


vector3D sub(vector3D a, vector3D b);


double dot(vector3D a, vector3D b);


vector3D cross(vector3D a, vector3D b);

#endif