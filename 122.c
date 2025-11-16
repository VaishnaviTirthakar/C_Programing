// Q18: Check Armstrong number
#include <stdio.h>
int main(){
    int n, sum=0, temp, r;
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        r=temp%10;
        sum += r*r*r;
        temp/=10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
}
