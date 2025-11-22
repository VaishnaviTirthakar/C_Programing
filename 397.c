// Write a program using structure to store robot path points (x,y).
#include <stdio.h>
struct Point { int x, y; };
int main() {
    struct Point p[3] = {{0,0}, {5,5}, {10,10}};
    for(int i=0;i<3;i++)
        printf("(%d,%d)\n", p[i].x, p[i].y);
}
