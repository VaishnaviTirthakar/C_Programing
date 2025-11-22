// Program using structure of 5 elements and print all.
#include <stdio.h>
struct A{ int a,b,c,d,e; };
int main(){
    struct A x={1,2,3,4,5};
    printf("%d %d %d %d %d",x.a,x.b,x.c,x.d,x.e);
}
