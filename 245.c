/* Q: Write a program to reverse string using pointers. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], *p, *q, t; gets(s);
    p=s; q=s+strlen(s)-1;
    while(p<q){ t=*p; *p=*q; *q=t; p++; q--; }
    printf("%s", s);
}
