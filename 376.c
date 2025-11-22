// Program to update structure using pointer.
#include <stdio.h>
struct A{ int x; };
int main(){
    struct A a={10}, *p=&a;
    p->x=50;
    printf("%d", a.x);
}
