// Q16: Check if number is prime
#include <stdio.h>
int main() {
    int n, flag=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if(n%i==0) flag=1;

    if(flag==0) printf("Prime");
    else printf("Not prime");
}
