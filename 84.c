//Divisible by Sum of Digits (3-digit)
#include <stdio.h>
int main() {
    int n; printf("Enter 3-digit number: "); if(scanf("%d",&n)!=1) return 0;
    int a=n/100, b=(n/10)%10, c=n%10;
    int s=a+b+c;
    if(s!=0 && n % s == 0) printf("%d divisible by sum of digits %d\n", n, s);
    else printf("Not divisible by sum of digits\n");
    return 0;
}
