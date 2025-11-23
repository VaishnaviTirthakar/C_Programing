// Q: Store wheel radius or wheel circumference using union.
#include <stdio.h>

union WheelCal {
    float radius;
    float circ;
};

int main() {
    union WheelCal wc;

    wc.radius = 0.15;
    printf("Radius = %.2f m\n", wc.radius);

    wc.circ = 0.94;
    printf("Circumference = %.2f m\n", wc.circ);

    return 0;
}
