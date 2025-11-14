//Divisible by 8
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n % 8 == 0) printf("%d divisible by 8\n", n); else printf("Not divisible by 8\n");
    return 0;
}
