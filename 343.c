// Write a program to find minimum number using pointer.
#include <stdio.h>
int main(){
    int a=10,b=5,*p=&a,*q=&b;
    printf("%d", (*p<*q)?*p:*q);
    return 0;
}
