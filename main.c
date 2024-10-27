#include <stdio.h>
#include "vector3d.h"

int main() {
    vector3d_t vector1, vector2;
    scanf("%lf %lf %lf",&vector1.x,&vector1.y,&vector1.z);
    scanf("%lf %lf %lf",&vector2.x,&vector2.y,&vector2.z);
    vector3d_t v_sum;
    vector3d_t v_sub;
    vector3d_t v_cross;


    vector_sum(&vector1, &vector2,&v_sum);
    vector_sub(&vector1, &vector2,&v_sub);
    double v_dot = vector_dot(&vector1, &vector2);
    vector_cross(&vector1, &vector2,&v_cross);

    printf("sum = (%.2f, %.2f, %.2f)\n", v_sum.x, v_sum.y, v_sum.z);
    printf("sub = (%.2f, %.2f, %.2f)\n", v_sub.x, v_sub.y, v_sub.z);
    printf("dot = %.2f\n", v_dot);
    printf("cross = (%.2f, %.2f, %.2f)\n", v_cross.x, v_cross.y, v_cross.z);

    return 0;
}