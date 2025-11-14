//Type of Triangle (equilateral / isosceles / scalene)
#include <stdio.h>
int main() {
    double a,b,c; printf("Enter three sides: "); if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    if(!(a + b > c && a + c > b && b + c > a)) { printf("Not a triangle\n"); return 0; }
    if(a==b && b==c) printf("Equilateral\n");
    else if(a==b || b==c || a==c) printf("Isosceles\n");
    else printf("Scalene\n");
    return 0;
}
