/* Write a function to check strong number */
#include <stdio.h>

int fact(int n){
    if(n==0) return 1;
    int f=1;
    while(n){ f*=n--; }
    return f;
}

int isStrong(int n){
    int temp=n,sum=0;
    while(temp){
        sum+=fact(temp%10);
        temp/=10;
    }
    return sum==n;
}

int main(){
    printf("%s", isStrong(145)?"Strong":"Not");
    return 0;
}
