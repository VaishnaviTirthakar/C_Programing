// Q: Store servo angle or servo pulse width.
#include <stdio.h>

union Servo {
    float angle;
    int pulse;
};

int main() {
    union Servo s;

    s.angle = 45.9;
    printf("Servo Angle = %.2f deg\n", s.angle);

    s.pulse = 1500;
    printf("Pulse Width = %d us\n", s.pulse);

    return 0;
}
