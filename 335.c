// Write a program to access 2D array using pointer.
#include <stdio.h>
int main(){
    int a[2][2]={{1,2},{3,4}};
    int (*p)[2]=a;
    printf("%d", p[1][1]);
    return 0;
}
