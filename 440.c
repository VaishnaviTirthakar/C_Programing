// Q: Store calibration offset or scale factor.
#include <stdio.h>

union Calib {
    float offset;
    float scale;
};

int main() {
    union Calib c;

    c.offset = 1.25;
    printf("Offset = %.2f\n", c.offset);

    c.scale = 0.98;
    printf("Scale = %.2f\n", c.scale);

    return 0;
}
