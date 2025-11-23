// Q: Store camera brightness or exposure using union.
#include <stdio.h>

union CamSet {
    int brightness;
    float exposure;
};

int main() {
    union CamSet cs;

    cs.brightness = 70;
    printf("Brightness = %d\n", cs.brightness);

    cs.exposure = 0.003;
    printf("Exposure = %.3f sec\n", cs.exposure);

    return 0;
}
