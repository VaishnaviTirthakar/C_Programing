// Write a program to add 2 to a pointer.
#include <stdio.h>
int main() {
    int a[] = {10,20,30,40};
    int *p = a;
    p = p + 2;
    printf("%d", *p);
    return 0;
}
