// Q: Use union to store laser intensity or range.
#include <stdio.h>

union Laser {
    int intensity;
    float range;
};

int main() {
    union Laser l;

    l.intensity = 88;
    printf("Laser Intensity = %d\n", l.intensity);

    l.range = 5.75;
    printf("Laser Range = %.2f m\n", l.range);

    return 0;
}
