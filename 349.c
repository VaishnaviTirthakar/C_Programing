// Write a program to use array of pointers to add numbers.
#include <stdio.h>
int main(){
    int a=5,b=7,c=9;
    int *p[]={&a,&b,&c};
    int sum=*p[0] + *p[1] + *p[2];
    printf("%d", sum);
    return 0;
}
