/* Q: Write a program to count alphabets, digits & special chars. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200]; gets(s);
    int a=0,d=0,sp=0;
    for(int i=0;s[i];i++){
        if(isalpha(s[i])) a++;
        else if(isdigit(s[i])) d++;
        else sp++;
    }
    printf("Alph=%d Dig=%d Sp=%d", a,d,sp);
}
