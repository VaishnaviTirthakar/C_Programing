/* Q: Write a program to replace vowels with '*' in a string. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; gets(s);
    for(int i=0;s[i];i++)
        if(strchr("aeiouAEIOU", s[i])) s[i]='*';
    printf("%s", s);
}
