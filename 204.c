/* Q: Write a program to compare two strings using strcmp(). */
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100];
    gets(a);
    gets(b);
    int r = strcmp(a, b);
    printf("Compare result = %d", r);
}
