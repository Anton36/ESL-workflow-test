#ifndef vector3d_H
#define vector3d_H
typedef struct {
    double x;
    double y;
    double z;
} vector3d_t;


void vector_sum(const vector3d_t *a, const vector3d_t *b,vector3d_t *out);


void vector_sub(const vector3d_t *a, const vector3d_t *b,vector3d_t *out);


double vector_dot(const vector3d_t *a, const vector3d_t *b);


void vector_cross(const vector3d_t *a, const vector3d_t *b,vector3d_t *out);

#endif