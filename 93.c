//Divisible by 9
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n % 9 == 0) printf("%d divisible by 9\n", n); else printf("Not divisible by 9\n");
    return 0;
}
