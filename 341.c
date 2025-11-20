// Write a program to print addresses of array elements using pointer.
#include <stdio.h>
int main(){
    int a[]={10,20,30}, *p=a;
    for(int i=0;i<3;i++) printf("%p\n", p+i);
    return 0;
}
