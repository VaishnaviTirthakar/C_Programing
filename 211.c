/* Q: Write a program to count spaces in a string. */
#include <stdio.h>
int main() {
    char s[100];
    int i,c=0;
    gets(s);
    for(i=0;s[i];i++) if(s[i]==' ') c++;
    printf("Spaces = %d", c);
}
