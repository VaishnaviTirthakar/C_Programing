/* Q: Write a program to copy first N characters using strncpy(). */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], r[100]; int n;
    gets(s); scanf("%d",&n);
    strncpy(r,s,n); r[n]='\0';
    printf("%s", r);
}
