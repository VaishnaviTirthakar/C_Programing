/* Q: Write a program to check if string contains digits only. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[100]; gets(s);
    for(int i=0;s[i];i++)
        if(!isdigit(s[i])){ printf("Not digit-only"); return 0; }
    printf("Digit-only");
}
