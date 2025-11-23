// Q: Store IMU acceleration or gyro speed.
#include <stdio.h>

union IMU {
    float accel;
    float gyro;
};

int main() {
    union IMU i;

    i.accel = 3.8;
    printf("Acceleration = %.2f m/s2\n", i.accel);

    i.gyro = 240.5;
    printf("Gyro Speed = %.2f deg/s\n", i.gyro);

    return 0;
}
