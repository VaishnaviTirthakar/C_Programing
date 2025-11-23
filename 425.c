// Q: Store battery temperature or charging current using union.
#include <stdio.h>

union BatteryPack {
    float temperature;
    float current;
};

int main() {
    union BatteryPack bp;

    bp.temperature = 35.8;
    printf("Battery Temp = %.2f C\n", bp.temperature);

    bp.current = 1.8;
    printf("Charging Current = %.2f A\n", bp.current);

    return 0;
}
