// Write a program to use double pointer to array.
#include <stdio.h>
int main(){
    int a[]={5,10,15};
    int *p=a;
    int **q=&p;
    printf("%d", **q);
    return 0;
}
