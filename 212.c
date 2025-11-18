/* Q: Write a program to count words in a string. */
#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    gets(s);
    int c=1;
    for(int i=0;s[i];i++)
        if(s[i]==' ') c++;
    printf("Words = %d", c);
}
