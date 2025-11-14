//Larger of Two Numbers
#include <stdio.h>
int main() {
    int a,b; printf("Enter two ints: "); if(scanf("%d %d",&a,&b)!=2) return 0;
    if(a > b) printf("%d is larger\n", a); else if(b > a) printf("%d is larger\n", b); else printf("Equal\n");
    return 0;
}
