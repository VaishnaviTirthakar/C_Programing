// Write a program to access a variable using a pointer.
#include <stdio.h>
int main() {
    int a = 20;
    int *p = &a;
    printf("Value: %d", *p);
    return 0;
}
