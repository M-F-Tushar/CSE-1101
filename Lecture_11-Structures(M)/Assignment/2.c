/*
Write a program to find distance between two points using structure. The values of the
points are to be taken from the user.
Sample Input:
Point-01: x = 2, y = 3
Point-02: x = 5, y = 7
Sample Output:
Distance = 5.00
*/
#include <stdio.h>
#include <math.h>

struct Point 
{
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    float distance;

    printf("Enter coordinates of Point-01 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates of Point-02 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("Distance = %.2f\n", distance);

    return 0;
}
