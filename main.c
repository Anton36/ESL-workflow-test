#include <stdio.h>
#include "vector3d.h"

int main() {
    vector3d vector1, vector2;
    scanf("%lf %lf %lf",&vector1.x,&vector1.y,&vector1.z);
    scanf("%lf %lf %lf",&vector2.x,&vector2.y,&vector2.z);
    vector3d v_sum;
    vector3d v_sub;
    vector3d v_cross;


    sum(&vector1, &vector2,&v_sum);
    sub(&vector1, &vector2,&v_sub);
    double v_dot = dot(&vector1, &vector2);
    cross(&vector1, &vector2,&v_cross);

    printf("sum = (%.2f, %.2f, %.2f)\n", v_sum.x, v_sum.y, v_sum.z);
    printf("sub = (%.2f, %.2f, %.2f)\n", v_sub.x, v_sub.y, v_sub.z);
    printf("dot = %.2f\n", v_dot);
    printf("cross = (%.2f, %.2f, %.2f)\n", v_cross.x, v_cross.y, v_cross.z);

    return 0;
}