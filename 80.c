//Multiple of 7
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n % 7 == 0) printf("%d is multiple of 7\n", n); else printf("Not multiple of 7\n");
    return 0;
}
