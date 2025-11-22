// Write a program to store Lidar sensor readings using structure array.
#include <stdio.h>
struct Lidar { float angle, distance; };
int main() {
    struct Lidar l[2] = {{30, 2.5}, {60, 3.0}};
    for(int i=0;i<2;i++)
        printf("%.1f° : %.1fm\n", l[i].angle, l[i].distance);
}
