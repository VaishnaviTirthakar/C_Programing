// Write a program to swap two values using double pointer.
#include <stdio.h>
void swap(int **x,int **y){
    int *t=*x; *x=*y; *y=t;
}
int main(){
    int a=10,b=20;
    int *p=&a,*q=&b;
    swap(&p,&q);
    printf("%d %d", *p,*q);
    return 0;
}
