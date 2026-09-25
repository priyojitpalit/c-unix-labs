/*
Purpose: Store related values in structures and use their members in a calculation.

Compile:
    gcc -Wall -Wextra -std=c11 point_distance.c -o point_distance -lm

Run:
    ./point_distance
*/

#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p1 = {0, 0};
    struct point p2 = {3, 4};

    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double distance = sqrt(dx * dx + dy * dy);

    printf("distance = %f\n", distance);

    return 0;
}
