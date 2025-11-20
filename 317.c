// Write a program to find length of string using pointer.
#include <stdio.h>
int main(){
    char s[]="World", *p=s;
    int c=0;
    while(*p){ c++; p++; }
    printf("Length = %d", c);
    return 0;
}
