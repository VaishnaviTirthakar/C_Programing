#include <stdio.h>
int main() {
    int a = -5, b = -10;
    if (!(a > 0 || b > 0))
        printf("Both numbers are non-positive\n");
    else
        printf("At least one number is positive\n");
    return 0;
}
