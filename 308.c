// Write a program to subtract 1 from a pointer.
#include <stdio.h>
int main() {
    int a[] = {10,20,30,40};
    int *p = &a[3];
    p = p - 1;
    printf("%d", *p);
    return 0;
}
