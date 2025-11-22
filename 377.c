// Program using typedef and structure array.
#include <stdio.h>
typedef struct P{ int x,y; } PT;
int main(){
    PT p[2]={{1,2},{3,4}};
    printf("%d %d", p[1].x,p[1].y);
}
