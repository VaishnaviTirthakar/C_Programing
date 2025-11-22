// Program to add two complex numbers using structure.
#include <stdio.h>
struct C{ int r,i; };
int main(){
    struct C a={5,3}, b={2,1}, c;
    c.r=a.r+b.r; c.i=a.i+b.i;
    printf("%d + %di",c.r,c.i);
}
