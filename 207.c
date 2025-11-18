/* Q: Write a program to reverse a string using strrev(). */
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    gets(a);
    printf("Reverse: %s", strrev(a));
}
