/* Write a function to swap two numbers using call by value */
#include <stdio.h>

void swap(int a, int b) {
    int t=a; a=b; b=t;
    printf("%d %d", a, b);
}

int main() {
    swap(3,8);
    return 0;
}
