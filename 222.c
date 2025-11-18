/* Q: Write a program to remove consonants from a string. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200], r[200]; int j=0;
    gets(s);
    for(int i=0;s[i];i++)
        if(strchr("aeiouAEIOU", s[i]) || !isalpha(s[i])) r[j++]=s[i];
    r[j]='\0';
    printf("%s", r);
}
