// Q: Use union to store gyro pitch or roll.
#include <stdio.h>

union Gyro {
    float pitch;
    float roll;
};

int main() {
    union Gyro g;

    g.pitch = 12.6;
    printf("Pitch = %.2f deg\n", g.pitch);

    g.roll = 8.9;
    printf("Roll = %.2f deg\n", g.roll);

    return 0;
}
