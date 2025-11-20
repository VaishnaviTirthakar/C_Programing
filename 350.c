// Write a program to find largest element in array using pointer.
#include <stdio.h>
int main(){
    int a[]={2,8,4,9,1}, *p=a;
    int max=*p;
    for(int i=1;i<5;i++)
        if(*(p+i)>max) max=*(p+i);
    printf("%d", max);
    return 0;
}
