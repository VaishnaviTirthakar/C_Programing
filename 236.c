/* Q: Write a program to check if string contains only letters. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[100]; gets(s);
    for(int i=0;s[i];i++)
        if(!isalpha(s[i])){ printf("Not alphabet-only"); return 0; }
    printf("Alphabet-only");
}
