//Even or Odd
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n % 2 == 0) printf("%d is Even\n", n); else printf("%d is Odd\n", n);
    return 0;
}
