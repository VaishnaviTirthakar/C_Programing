// Write a program to use pointer to entire array.
#include <stdio.h>
int main(){
    int a[]={1,2,3};
    int (*p)[3]=&a;
    for(int i=0;i<3;i++) printf("%d ", (*p)[i]);
    return 0;
}
