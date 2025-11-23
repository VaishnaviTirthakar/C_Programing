// Q: Use union to store heat level or temperature value.
#include <stdio.h>

union Thermal {
    int heat;
    float temp;
};

int main() {
    union Thermal t;

    t.heat = 120;
    printf("Heat Level = %d\n", t.heat);

    t.temp = 68.8;
    printf("Temp = %.2f C\n", t.temp);

    return 0;
}
