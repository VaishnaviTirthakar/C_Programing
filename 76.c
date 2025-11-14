//Triangle Validity (sides)
#include <stdio.h>
int main() {
    double a,b,c; printf("Enter three sides: "); if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    if(a + b > c && a + c > b && b + c > a) printf("Valid triangle\n"); else printf("Not a triangle\n");
    return 0;
}
