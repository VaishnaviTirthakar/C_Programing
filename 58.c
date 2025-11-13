#include <stdio.h>
int main() {
    int a = 16;
    a >>= 2;  // same as a = a >> 2
    printf("After >>= operator: %d\n", a);
    return 0;
}
