#ifndef VECTOR3D_H
#define VECTOR3D_H
typedef struct {
    double x;
    double y;
    double z;
} vector3d;


void sum(const vector3d *a, const vector3d *b,vector3d *out);


void sub(const vector3d *a, const vector3d *b,vector3d *out);


double dot(const vector3d *a, const vector3d *b);


void cross(const vector3d *a, const vector3d *b,vector3d *out);

#endif