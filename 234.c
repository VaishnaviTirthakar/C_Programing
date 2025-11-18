/* Q: Write a program to delete character at given index. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; gets(s);
    int p; scanf("%d",&p);
    for(int i=p;s[i];i++) s[i]=s[i+1];
    printf("%s", s);
}
