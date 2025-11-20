// Write a program to use pointer to constant pointer.
#include <stdio.h>
int main(){
    int a=5,b=6;
    int *p=&a;
    int * const *q=&p;
    printf("%d", **q);
    return 0;
}
