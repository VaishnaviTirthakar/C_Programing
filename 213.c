/* Q: Write a program to check if a string is palindrome. */
#include <stdio.h>
#include <string.h>
int main() {
    char s[100], r[100];
    gets(s);
    strcpy(r, s);
    strrev(r);
    if(strcmp(s,r)==0) printf("Palindrome");
    else printf("Not Palindrome");
}
