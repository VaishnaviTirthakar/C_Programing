/* Q: Write a program to insert a character at given index. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; gets(s);
    char ch; int p; scanf(" %c %d",&ch,&p);
    for(int i=strlen(s);i>=p;i--) s[i+1]=s[i];
    s[p]=ch;
    printf("%s", s);
}
