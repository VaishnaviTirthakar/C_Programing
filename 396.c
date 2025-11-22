// Write a program to store robot sensor values (IR, ultrasonic) using structure.
#include <stdio.h>
struct Sensor { int ir; float us; };
int main() {
    struct Sensor s = {1, 30.5};
    printf("IR:%d  Ultrasonic:%.1f", s.ir, s.us);
}
