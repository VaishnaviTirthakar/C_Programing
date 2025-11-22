// Write a program to copy structure variables.
#include <stdio.h>
struct A{ int x; };
int main(){
    struct A p={10}, q;
    q=p;
    printf("%d", q.x);
}
