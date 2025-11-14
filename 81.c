//Sum of Digits (3-digit) is Even or Odd
#include <stdio.h>
int main() {
    int n; printf("Enter a 3-digit number: "); if(scanf("%d",&n)!=1) return 0;
    int a = n/100, b = (n/10)%10, c = n%10;
    int s = a+b+c;
    if(s % 2 == 0) printf("Sum of digits %d is Even\n", s); else printf("Odd\n");
    return 0;
}
