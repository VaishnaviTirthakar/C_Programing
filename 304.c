// Write a program to use pointer with char variable.
#include <stdio.h>
int main() {
    char c = 'A';
    char *p = &c;
    printf("Char: %c", *p);
    return 0;
}
