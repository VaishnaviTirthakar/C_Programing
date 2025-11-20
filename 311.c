// Write a program to swap two numbers using function with pointers.
#include <stdio.h>
void swap(int *x,int *y){
    int t=*x; *x=*y; *y=t;
}
int main(){
    int a=5,b=10;
    swap(&a,&b);
    printf("%d %d", a,b);
    return 0;
}
