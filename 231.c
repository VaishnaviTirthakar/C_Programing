/* Q: Write a program to find how many times a character appears. */
#include <stdio.h>
int main(){
    char s[100], ch; gets(s);
    scanf("%c",&ch);
    int c=0;
    for(int i=0;s[i];i++) if(s[i]==ch) c++;
    printf("Count = %d", c);
}
