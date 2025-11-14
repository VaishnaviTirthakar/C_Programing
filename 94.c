//Two Numbers Same Sign?
#include <stdio.h>
int main() {
    int a,b; printf("Enter two ints: "); if(scanf("%d %d",&a,&b)!=2) return 0;
    if(a==0 || b==0) printf("One is zero\n");
    else if((a>0 && b>0) || (a<0 && b<0)) printf("Same sign\n");
    else printf("Opposite signs\n");
    return 0;
}
