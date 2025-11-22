// Program to merge two structure variables.
#include <stdio.h>
struct P{ int x,y; };
int main(){
    struct P a={1,2}, b={3,4}, c;
    c.x=a.x+b.x; c.y=a.y+b.y;
    printf("%d %d",c.x,c.y);
}
