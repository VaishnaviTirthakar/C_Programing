// Write a program to print array elements using pointer.
#include <stdio.h>
int main(){
    int a[]={10,20,30,40}, *p=a;
    for(int i=0;i<4;i++) printf("%d ", *(p+i));
    return 0;
}
