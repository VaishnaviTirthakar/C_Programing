// Q: Store actuator load or actuator RPM.
#include <stdio.h>

union Actuator {
    float load;
    int rpm;
};

int main() {
    union Actuator a;

    a.load = 13.5;
    printf("Actuator Load = %.2f kg\n", a.load);

    a.rpm = 1800;
    printf("RPM = %d\n", a.rpm);

    return 0;
}
