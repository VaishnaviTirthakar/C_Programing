// Program using structure and pointer arithmetic.
#include <stdio.h>
struct A{ int x; };
int main(){
    struct A a[2]={{10},{20}};
    struct A *p=a;
    printf("%d %d", p->x,(p+1)->x);
}
