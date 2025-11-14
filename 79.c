//Multiple of 11
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n % 11 == 0) printf("%d is multiple of 11\n", n); else printf("Not multiple of 11\n");
    return 0;
}

