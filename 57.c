#include <stdio.h>
int main() {
    int a = 17;
    a %= 5;  // same as a = a % 5
    printf("After %%= operator: %d\n", a);
    return 0;
}
