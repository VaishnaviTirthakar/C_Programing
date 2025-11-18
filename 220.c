/* Q: Write a program to count special characters in a string. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[100]; gets(s);
    int c=0;
    for(int i=0;s[i];i++)
        if(!isalnum(s[i]) && s[i] != ' ') c++;
    printf("Special chars = %d", c);
}
