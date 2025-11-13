#include <stdio.h>
int main() {
    int a = 5, b = 2;
    int result = (a + b) * (a - b);
    printf("Combined result: (%d + %d) * (%d - %d) = %d\n", a, b, a, b, result);
    return 0;
}
