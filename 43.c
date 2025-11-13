#include <stdio.h>
int main() {
    int a = -5, b = 10;
    if (a > 0 || b > 0)
        printf("At least one number is positive\n");
    else
        printf("Both are not positive\n");
    return 0;
}
