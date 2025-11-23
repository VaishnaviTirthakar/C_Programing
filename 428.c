// Q: Use union to store obstacle height or width.
#include <stdio.h>

union Obstacle {
    float height;
    float width;
};

int main() {
    union Obstacle o;

    o.height = 1.2;
    printf("Obstacle Height = %.2f m\n", o.height);

    o.width = 0.8;
    printf("Obstacle Width = %.2f m\n", o.width);

    return 0;
}
