#include <stdio.h>
int main() {
    int a = 10, b = 20;
    if (a > 0 && b > 0)
        printf("Both a and b are positive\n");
    else
        printf("At least one is not positive\n");
    return 0;
}
