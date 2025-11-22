// Program to update structure values.
#include <stdio.h>
struct P{ int x,y; };
int main(){
    struct P p={10,20};
    p.x=30;
    printf("%d %d", p.x,p.y);
}
