/* Q: Write a program to find last occurrence of a character. */
#include <stdio.h>
int main(){
    char s[100], ch; gets(s);
    scanf("%c",&ch);
    int pos=-1;
    for(int i=0;s[i];i++) if(s[i]==ch) pos=i;
    printf("Last pos = %d", pos);
}
