//Triangle: Acute, Right or Obtuse (by sides)
#include <stdio.h>
int main() {
    double a,b,c; printf("Enter sides: "); if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    if(!(a+b>c && a+c>b && b+c>a)) { printf("Not a triangle\n"); return 0; }
    /* sort so that c is largest */
    double x=a,y=b,z=c, tmp;
    if(x>y){ tmp=x; x=y; y=tmp; } if(y>z){ tmp=y; y=z; z=tmp; } if(x>y){ tmp=x; x=y; y=tmp; }
    double lhs = x*x + y*y, rhs = z*z;
    if(lhs == rhs) printf("Right triangle\n");
    else if(lhs > rhs) printf("Acute triangle\n"); else printf("Obtuse triangle\n");
    return 0;
}
