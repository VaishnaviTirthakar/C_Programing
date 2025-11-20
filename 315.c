// Write a program to count even numbers using pointer.
#include <stdio.h>
int main(){
    int a[]={2,3,4,5,6}, *p=a, c=0;
    for(int i=0;i<5;i++) if(*(p+i)%2==0) c++;
    printf("Even count = %d", c);
    return 0;
}
