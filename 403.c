// Q: Store either robot temperature or distance using a union.
#include <stdio.h>

union Sensor {
    float temperature;
    int distance;
};

int main() {
    union Sensor s;

    s.temperature = 32.5;
    printf("Temperature = %.2f C\n", s.temperature);

    s.distance = 85;
    printf("Distance = %d cm\n", s.distance);

    return 0;
}
