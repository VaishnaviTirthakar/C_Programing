//Quadratic Equation Roots Type (discriminant)
#include <stdio.h>
int main() {
    double a,b,c; printf("Enter a b c: "); if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    double d = b*b - 4*a*c;
    if(d>0) printf("Real and distinct roots\n");
    else if(d==0) printf("Real and equal roots\n");
    else printf("Complex roots\n");
    return 0;
}
