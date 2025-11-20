// Write a program to multiply two numbers using pointer.
#include <stdio.h>
int main(){
    int a=5,b=6,*p=&a,*q=&b;
    printf("%d", (*p)*(*q));
    return 0;
}
