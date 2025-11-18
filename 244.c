/* Q: Write a program to rotate string left by 1 character. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], t; gets(s);
    t=s[0];
    for(int i=0;s[i];i++) s[i]=s[i+1];
    s[strlen(s)]=t;
    printf("%s", s);
}
