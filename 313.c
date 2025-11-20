// Write a program to find sum of array elements using pointers.
#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5}, *p=a, sum=0;
    for(int i=0;i<5;i++) sum += *(p+i);
    printf("Sum = %d", sum);
    return 0;
}
