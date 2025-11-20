// Write a program to find maximum of two numbers using pointers.
#include <stdio.h>
int main(){
    int a=10,b=20,*p=&a,*q=&b;
    int max = (*p > *q) ? *p : *q;
    printf("Max = %d", max);
    return 0;
}
