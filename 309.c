// Write a program to use double pointer.
#include <stdio.h>
int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;
    printf("%d", **q);
    return 0;
}
