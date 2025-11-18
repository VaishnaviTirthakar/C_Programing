/* Q: Write a program to count consonants in a string. */
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, c=0;
    gets(s);
    for(i=0;s[i];i++)
        if(isalpha(s[i]) && !strchr("aeiouAEIOU", s[i])) c++;
    printf("Consonants = %d", c);
}
