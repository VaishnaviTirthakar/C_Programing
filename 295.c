/* Write a function to calculate nCr */
#include <stdio.h>

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    printf("%d", ncr(5,2));
    return 0;
}
