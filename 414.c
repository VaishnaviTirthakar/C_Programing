// Q: Use union to store joystick X or joystick Y.
#include <stdio.h>

union Joy {
    int x;
    int y;
};

int main() {
    union Joy j;

    j.x = 10;
    printf("Joystick X = %d\n", j.x);

    j.y = 20;
    printf("Joystick Y = %d\n", j.y);

    return 0;
}
