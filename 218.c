/* Q: Write a program to count uppercase letters in a string. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[100]; gets(s);
    int c=0;
    for(int i=0;s[i];i++) if(isupper(s[i])) c++;
    printf("Uppercase = %d", c);
}
