/* Q: Write a program to replace all spaces with '-' */
#include <stdio.h>
int main() {
    char s[100];
    gets(s);
    for(int i=0;s[i];i++)
        if(s[i]==' ') s[i]='-';
    printf("%s", s);
}
