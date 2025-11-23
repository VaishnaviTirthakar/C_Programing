// Q: Use union to store either robot arm base angle or elbow angle.
#include <stdio.h>

union Joint {
    float base;
    float elbow;
};

int main() {
    union Joint j;

    j.base = 45.6;
    printf("Base Angle = %.2f\n", j.base);

    j.elbow = 90.2;
    printf("Elbow Angle = %.2f\n", j.elbow);

    return 0;
}
