/* Write a function to check palindrome number */
#include <stdio.h>

int isPal(int n){
    int temp=n,r=0;
    while(temp){
        r=r*10 + temp%10;
        temp/=10;
    }
    return n==r;
}

int main(){
    printf("%s", isPal(121)?"Palindrome":"Not");
    return 0;
}
