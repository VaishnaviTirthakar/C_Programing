// Write a program to update robot movement using structure (move by dx,dy).
#include <stdio.h>
struct Robot { int x, y; };
int main() {
    struct Robot r = {5, 5};
    int dx = 2, dy = -1;
    r.x += dx;
    r.y += dy;
    printf("New Position: %d %d", r.x, r.y);
}
