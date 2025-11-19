/* Write a function to calculate nPr */
#include <stdio.h>

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

int npr(int n,int r){
    return fact(n)/fact(n-r);
}

int main(){
    printf("%d", npr(5,2));
    return 0;
}
