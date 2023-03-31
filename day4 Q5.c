#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point p1, p2;
    float distance;

    printf("Enter coordinates for point 1:\n");
    printf("x: ");
    scanf("%f", &p1.x);
    printf("y: ");
    scanf("%f", &p1.y);

    printf("Enter coordinates for point 2:\n");
    printf("x: ");
    scanf("%f", &p2.x);
    printf("y: ");
    scanf("%f", &p2.y);

    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return 0;
}
