// Q: Store robot camera pixel count or frame rate in union.
#include <stdio.h>

union Camera {
    int pixels;
    float fps;
};

int main() {
    union Camera c;

    c.pixels = 1080;
    printf("Pixels = %d\n", c.pixels);

    c.fps = 30.5;
    printf("FPS = %.2f\n", c.fps);

    return 0;
}
