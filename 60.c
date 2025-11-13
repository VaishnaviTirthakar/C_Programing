#include <stdio.h>
int main() {
    int a = 7;   // 0111
    a &= 3;      // 0011
    printf("After &= operator: %d\n", a);
    return 0;
}
