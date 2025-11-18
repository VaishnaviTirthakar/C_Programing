/* Q: Write a program to convert a string to uppercase using strupr(). */
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    gets(a);
    printf("Uppercase: %s", strupr(a));
}
