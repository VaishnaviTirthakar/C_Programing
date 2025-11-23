// Q: Store steering angle or steering speed.
#include <stdio.h>

union Steering {
    float angle;
    float speed;
};

int main() {
    union Steering st;

    st.angle = 22.5;
    printf("Angle = %.2f deg\n", st.angle);

    st.speed = 5.7;
    printf("Steering Speed = %.2f deg/s\n", st.speed);

    return 0;
}
