// Write a program to modify array using pointer in function.
#include <stdio.h>
void change(int *p){ p[0] = 100; }
int main(){
    int a[]={1,2,3};
    change(a);
    printf("%d", a[0]);
    return 0;
}
