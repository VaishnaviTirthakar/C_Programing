// Write a program to store a robot’s position (x,y) using structure and display it.
#include <stdio.h>
struct Position { int x, y; };
int main() {
    struct Position r = {10, 20};
    printf("Robot at (%d,%d)", r.x, r.y);
}
