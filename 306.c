// Write a program to decrement a pointer.
#include <stdio.h>
int main() {
    int a[3] = {10, 20, 30};
    int *p = &a[2];
    p--;
    printf("Value: %d", *p);
    return 0;
}
