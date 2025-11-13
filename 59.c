#include <stdio.h>
int main() {
    int a = 4;
    a <<= 3;  // same as a = a << 3
    printf("After <<= operator: %d\n", a);
    return 0;
}
