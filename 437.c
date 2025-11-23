// Q: Store yaw or rotation speed using union.
#include <stdio.h>

union Rotation {
    float yaw;
    float speed;
};

int main() {
    union Rotation r;

    r.yaw = 60.2;
    printf("Yaw = %.2f deg\n", r.yaw);

    r.speed = 15.5;
    printf("Rotation Speed = %.2f deg/s\n", r.speed);

    return 0;
}
