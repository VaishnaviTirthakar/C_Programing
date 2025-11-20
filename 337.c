// Write a program to pass pointer to function to find sum.
#include <stdio.h>
int sum(int *a,int n){
    int s=0;
    for(int i=0;i<n;i++) s+=a[i];
    return s;
}
int main(){
    int a[]={1,2,3};
    printf("%d", sum(a,3));
    return 0;
}
