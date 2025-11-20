// Write a program to use pointer with float variable.
#include <stdio.h>
int main() {
    float f = 3.14;
    float *p = &f;
    printf("Value: %.2f", *p);
    return 0;
}
