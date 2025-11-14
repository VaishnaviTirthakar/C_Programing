//Divisible by 4
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n % 4 == 0) printf("%d divisible by 4\n", n); else printf("Not divisible by 4\n");
    return 0;
}
