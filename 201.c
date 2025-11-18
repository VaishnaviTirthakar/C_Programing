/* Q: Write a program to find the length of a string using strlen(). */
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    gets(s);
    printf("Length = %d", strlen(s));
}
