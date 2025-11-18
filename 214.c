/* Q: Write a program to find substring position using strstr(). */
#include <stdio.h>
#include <string.h>
int main() {
    char s[100], sub[50];
    gets(s);
    gets(sub);
    char *p = strstr(s, sub);
    if(p) printf("Found at position %ld", p - s);
    else printf("Not found");
}
