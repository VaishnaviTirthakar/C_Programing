// Q: Store robot battery percentage or voltage using union.
#include <stdio.h>

union Battery {
    int percent;
    float voltage;
};

int main() {
    union Battery b;

    b.percent = 85;
    printf("Battery = %d%%\n", b.percent);

    b.voltage = 11.7;
    printf("Voltage = %.2fV\n", b.voltage);

    return 0;
}
