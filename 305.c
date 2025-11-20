// Write a program to increment a pointer.
#include <stdio.h>
int main() {
    int a[3] = {10, 20, 30};
    int *p = a;
    p++;
    printf("Value: %d", *p);
    return 0;
}
