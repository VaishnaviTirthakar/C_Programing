//Right-angled Triangle Check (Pythagoras)
#include <stdio.h>
int main() {
    double a,b,c; printf("Enter three sides: "); if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    /* find largest side */
    double max = a, x=a,y=b,z=c;
    if(b>max){ max=b; x=b; y=a; z=c; }
    if(c>max){ max=c; x=c; y=a; z=b; }
    if( (max*max) == (y*y + z*z) ) printf("Right-angled\n"); else printf("Not right-angled\n");
    return 0;
}
