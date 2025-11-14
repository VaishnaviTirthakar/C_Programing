//Pass/Fail (three subjects, pass >= 40)
#include <stdio.h>
int main() {
    int a,b,c; printf("Enter three marks: "); if(scanf("%d %d %d",&a,&b,&c)!=3) return 0;
    if(a>=40 && b>=40 && c>=40) printf("Pass\n"); else printf("Fail\n");
    return 0;
}
