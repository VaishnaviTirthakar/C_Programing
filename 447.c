// Q: Store robot tilt angle or correction factor.
#include <stdio.h>

union Balance {
    float tilt;
    float correction;
};

int main() {
    union Balance b;

    b.tilt = 5.3;
    printf("Tilt = %.2f deg\n", b.tilt);

    b.correction = 1.1;
    printf("Correction = %.2f\n", b.correction);

    return 0;
}
