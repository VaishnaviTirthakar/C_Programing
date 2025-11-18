/* Q: Write a program to find string length without strlen(). */
#include <stdio.h>
int main(){
    char s[100]; gets(s);
    int c=0; while(s[c]) c++;
    printf("Length = %d", c);
}
