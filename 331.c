// Write a program to use pointer to constant.
#include <stdio.h>
int main(){
    const int a=10;
    const int *p=&a;
    printf("%d", *p);
    return 0;
}
