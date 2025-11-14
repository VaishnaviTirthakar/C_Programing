//Absolute Value
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n<0) n = -n;
    printf("Absolute = %d\n", n);
    return 0;
}
