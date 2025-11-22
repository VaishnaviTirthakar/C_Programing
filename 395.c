// Write a program to store robot wheel speed using structure.
#include <stdio.h>
struct Wheel { float left, right; };
int main() {
    struct Wheel w = {12.5, 13.0};
    printf("Left: %.1f Right: %.1f", w.left, w.right);
}
