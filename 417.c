// Q: Use union to store encoder ticks or rotation value.
#include <stdio.h>

union Encoder {
    int ticks;
    float rotation;
};

int main() {
    union Encoder e;

    e.ticks = 450;
    printf("Ticks = %d\n", e.ticks);

    e.rotation = 37.5;
    printf("Rotation = %.2f deg\n", e.rotation);

    return 0;
}
