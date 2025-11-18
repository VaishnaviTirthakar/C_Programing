/* Q: Write a program to toggle case of alternate characters. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[100]; gets(s);
    for(int i=0;s[i];i++)
        s[i] = (i%2==0) ? toupper(s[i]) : tolower(s[i]);
    printf("%s", s);
}
