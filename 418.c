// Q: Use union to store move distance or turn angle.
#include <stdio.h>

union Motion {
    float distance;
    float angle;
};

int main() {
    union Motion m;

    m.distance = 3.4;
    printf("Move Distance = %.2f m\n", m.distance);

    m.angle = 90.0;
    printf("Turn Angle = %.2f deg\n", m.angle);

    return 0;
}
