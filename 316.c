// Write a program to print string using pointer.
#include <stdio.h>
int main(){
    char s[]="Hello", *p=s;
    while(*p) printf("%c", *p++);
    return 0;
}
