// Program to calculate area of rectangle using structure.
#include <stdio.h>
struct Rec{ int l,b; };
int main(){
    struct Rec r={10,5};
    printf("%d", r.l*r.b);
}
