#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 15;

    if (a >= b && a >= c)
        printf("a is the largest\n");
    else if (b >= a && b >= c)
        printf("b is the largest\n");
    else
        printf("c is the largest\n");
    return 0;
}
