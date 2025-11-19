/* Write a function to find minimum of two numbers */
#include <stdio.h>

int min(int a, int b) {
    return (a<b)?a:b;
}

int main() {
    printf("%d", min(20,15));
    return 0;
}
