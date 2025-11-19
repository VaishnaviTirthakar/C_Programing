/* Write a function to reverse a number */
#include <stdio.h>

int reverse(int n){
    int r=0;
    while(n){
        r=r*10 + n%10;
        n/=10;
    }
    return r;
}

int main(){
    printf("%d", reverse(1234));
    return 0;
}
