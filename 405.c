// Q: Use union to store left or right wheel speed.
#include <stdio.h>

union Wheel {
    int left;
    int right;
};

int main() {
    union Wheel w;

    w.left = 60;
    printf("Left Wheel = %d RPM\n", w.left);

    w.right = 75;
    printf("Right Wheel = %d RPM\n", w.right);

    return 0;
}
