// Q29: Count even digits in a number
#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    while(n>0){
        if((n%10)%2==0) count++;
        n/=10;
    }
    printf("%d",count);
}
