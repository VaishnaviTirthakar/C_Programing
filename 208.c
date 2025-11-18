/* Q: Write a program to count vowels in a string. */
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, c=0;
    gets(s);
    for(i=0;s[i];i++)
        if(strchr("aeiouAEIOU", s[i])) c++;
    printf("Vowels = %d", c);
}
