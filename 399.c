// Write a program for robot speed calculation using structure (distance/time).
#include <stdio.h>
struct Move { float distance, time; };
int main() {
    struct Move m = {15.0, 3.0};
    printf("Speed: %.2f m/s", m.distance / m.time);
}
