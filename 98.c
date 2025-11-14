//Check if Point Lies on Axis or Origin
#include <stdio.h>
int main() {
    int x,y; printf("Enter x y: "); if(scanf("%d %d",&x,&y)!=2) return 0;
    if(x==0 && y==0) printf("Origin\n");
    else if(x==0) printf("On Y axis\n");
    else if(y==0) printf("On X axis\n");
    else printf("Not on axis\n");
    return 0;
}
