// Write a program to swap first and last element of array using pointers.
#include <stdio.h>
int main(){
    int a[]={10,20,30,40}, *p=a, t;
    t=p[0];
    p[0]=p[3];
    p[3]=t;
    printf("%d %d", a[0], a[3]);
    return 0;
}
