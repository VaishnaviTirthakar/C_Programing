// Write a program to declare a pointer and print its address.
#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    printf("Address: %p", p);
    return 0;
}
