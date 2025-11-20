// Write a program to reverse string using pointers.
#include <stdio.h>
#include <string.h>
int main(){
    char s[]="ABC", *p=s;
    int n=strlen(s);
    for(int i=n-1;i>=0;i--) printf("%c", *(p+i));
    return 0;
}
