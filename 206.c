/* Q: Write a program to convert a string to lowercase using strlwr(). */
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    gets(a);
    printf("Lowercase: %s", strlwr(a));
}
