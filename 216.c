/* Q: Write a program to remove all spaces from a string. */
#include <stdio.h>
int main() {
    char s[200], r[200]; int j=0;
    gets(s);
    for(int i=0;s[i];i++)
        if(s[i]!=' ') r[j++]=s[i];
    r[j]='\0';
    printf("%s", r);
}
