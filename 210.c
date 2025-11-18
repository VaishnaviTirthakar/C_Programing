/* Q: Write a program to count digits in a string. */
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, c=0;
    gets(s);
    for(i=0;s[i];i++)
        if(isdigit(s[i])) c++;
    printf("Digits = %d", c);
}
