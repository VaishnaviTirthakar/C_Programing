// Program using structure pointer.
#include <stdio.h>
struct A{ int x; };
int main(){
    struct A a={100}, *p=&a;
    printf("%d", p->x);
}
