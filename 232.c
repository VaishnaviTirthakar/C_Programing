/* Q: Write a program to remove all occurrences of a character. */
#include <stdio.h>
int main(){
    char s[200], r[200], ch; gets(s);
    scanf("%c",&ch); int j=0;
    for(int i=0;s[i];i++) if(s[i]!=ch) r[j++]=s[i];
    r[j]='\0';
    printf("%s", r);
}
