#include <stdio.h>
#include <math.h>

// define a structure of a point in a 3D space
typedef struct {
    int x;
    int y;
    int z;
} Point;

void printPoint(Point p) {
    printf("Point(%d, %d, %d)\n", p.x, p.y, p.z);
}

int main() {
    Point p1 = {3, 4, 12};
    Point p2 = {0, 0, 0};
    double distance = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)+pow(p1.z-p2.z,2));
    printPoint(p1);
    printPoint(p2);
    printf("distance of p1 and p2 is %.2f",distance); //小數後兩位float
    return 0;
}
