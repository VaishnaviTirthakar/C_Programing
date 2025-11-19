/* Write a function to find sum of digits */
#include <stdio.h>

int sumDigits(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(){
    printf("%d", sumDigits(1234));
    return 0;
}
