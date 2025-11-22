// Program for structure initialization in different ways.
#include <stdio.h>
struct A{ int x,y; };
int main(){
    struct A p={.y=20,.x=10};
    printf("%d %d", p.x,p.y);
}
