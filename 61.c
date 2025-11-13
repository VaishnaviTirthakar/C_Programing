#include <stdio.h>
int main() {
    int a = 4;   // 0100
    a |= 2;      // 0010 → 0110 = 6
    printf("After |= operator: %d\n", a);
    return 0;
}
