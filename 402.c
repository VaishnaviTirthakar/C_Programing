// Q: Use a union to store either robot position or speed.
#include <stdio.h>

union RobotData {
    int position;
    float speed;
};

int main() {
    union RobotData d;

    d.position = 120;
    printf("Robot Position = %d\n", d.position);

    d.speed = 3.75;
    printf("Robot Speed = %.2f\n", d.speed);

    return 0;
}
