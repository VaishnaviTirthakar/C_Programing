/* Q: Write a program to swap uppercase to lowercase and vice versa. */
#include <stdio.h>
#include <ctype.h>
int main() {
    char s[100];
    gets(s);
    for(int i=0;s[i];i++)
        if(isupper(s[i])) s[i]=tolower(s[i]);
        else s[i]=toupper(s[i]);
    printf("%s", s);
}
