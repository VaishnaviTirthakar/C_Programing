// Q: Store either IR signal strength or IR object distance.
#include <stdio.h>

union IR {
    int strength;
    float distance;
};

int main() {
    union IR ir;

    ir.strength = 90;
    printf("IR Strength = %d\n", ir.strength);

    ir.distance = 2.6;
    printf("IR Distance = %.2f m\n", ir.distance);

    return 0;
}
