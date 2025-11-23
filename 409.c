// Q: Use union to store robot motor power in watts or torque.
#include <stdio.h>

union Motor {
    float watts;
    int torque;
};

int main() {
    union Motor m;

    m.watts = 45.5;
    printf("Motor Power = %.2fW\n", m.watts);

    m.torque = 18;
    printf("Motor Torque = %d Nm\n", m.torque);

    return 0;
}
