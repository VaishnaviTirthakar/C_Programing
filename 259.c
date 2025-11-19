/* Write a function to find maximum of two numbers */
#include <stdio.h>

int max(int a, int b) {
    return (a>b)?a:b;
}

int main() {
    printf("%d", max(20,15));
    return 0;
}
