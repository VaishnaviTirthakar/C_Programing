/* Q: Write a program to capitalize each word. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200]; gets(s);
    if(s[0]) s[0]=toupper(s[0]);
    for(int i=1;s[i];i++)
        if(s[i]==' ') s[i+1]=toupper(s[i+1]);
    printf("%s", s);
}
