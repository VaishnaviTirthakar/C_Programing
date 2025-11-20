// Write a program to reverse array using pointer.
#include <stdio.h>
int main(){
    int a[]={1,2,3,4}, *p=a;
    for(int i=3;i>=0;i--) printf("%d ", *(p+i));
    return 0;
}
