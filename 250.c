/* Q: Write a program to remove vowels and convert remaining to uppercase. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[200], r[200]; int j=0;
    gets(s);
    for(int i=0;s[i];i++)
        if(!strchr("aeiouAEIOU", s[i])) r[j++]=toupper(s[i]);
    r[j]='\0';
    printf("%s", r);
}
