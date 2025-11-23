// Q: Use union to store either X or Y coordinate of robot.
#include <stdio.h>

union Coord {
    float x;
    float y;
};

int main() {
    union Coord c;

    c.x = 12.5;
    printf("X = %.2f\n", c.x);

    c.y = 7.3;
    printf("Y = %.2f\n", c.y);

    return 0;
}
