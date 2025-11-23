// Q: Store ultrasonic time taken or calculated distance.
#include <stdio.h>

union Ultra {
    float time;
    float distance;
};

int main() {
    union Ultra u;

    u.time = 0.023;
    printf("Time = %.3f sec\n", u.time);

    u.distance = 1.7;
    printf("Distance = %.2f m\n", u.distance);

    return 0;
}
