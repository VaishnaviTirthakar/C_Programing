// Write a program to print string by incrementing pointer.
#include <stdio.h>
int main(){
    char s[]="ABC", *p=s;
    while(*p) printf("%c ", *p++);
    return 0;
}
