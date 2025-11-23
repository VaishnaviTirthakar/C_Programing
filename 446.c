// Q: Use union to store torque or torque percentage.
#include <stdio.h>

union Torque {
    float value;
    int percent;
};

int main() {
    union Torque tq;

    tq.value = 12.5;
    printf("Torque = %.2f Nm\n", tq.value);

    tq.percent = 76;
    printf("Percent = %d%%\n", tq.percent);

    return 0;
}
