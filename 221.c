/* Q: Write a program to remove vowels from a string. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[200], r[200]; int j=0;
    gets(s);
    for(int i=0;s[i];i++)
        if(!strchr("aeiouAEIOU", s[i]))
            r[j++] = s[i];
    r[j]='\0';
    printf("%s", r);
}
