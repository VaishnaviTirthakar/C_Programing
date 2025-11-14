//Point in Quadrant (x,y)
#include <stdio.h>
int main() {
    double x,y; printf("Enter x y: "); if(scanf("%lf %lf",&x,&y)!=2) return 0;
    if(x==0 && y==0) printf("Origin\n");
    else if(x==0) printf("On Y axis\n");
    else if(y==0) printf("On X axis\n");
    else if(x>0 && y>0) printf("Quadrant I\n");
    else if(x<0 && y>0) printf("Quadrant II\n");
    else if(x<0 && y<0) printf("Quadrant III\n");
    else printf("Quadrant IV\n");
    return 0;
}
