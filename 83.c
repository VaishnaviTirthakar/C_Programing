//Palindrome (3-digit)
#include <stdio.h>
int main() {
    int n; printf("Enter 3-digit number: "); if(scanf("%d",&n)!=1) return 0;
    int rev = (n%10)*100 + ((n/10)%10)*10 + n/100;
    if(rev == n) printf("Palindrome\n"); else printf("Not Palindrome\n");
    return 0;
}
