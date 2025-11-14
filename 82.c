//Armstrong Number (3-digit)
#include <stdio.h>
#include <math.h>
int main() {
    int n; printf("Enter 3-digit number: "); if(scanf("%d",&n)!=1) return 0;
    int a = n/100, b = (n/10)%10, c = n%10;
    if(a*a*a + b*b*b + c*c*c == n) printf("%d is Armstrong\n", n); else printf("Not Armstrong\n");
    return 0;
}
