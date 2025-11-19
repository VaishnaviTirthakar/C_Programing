/* Write a function to count digits */
#include <stdio.h>

int count(int n){
    int c=0;
    while(n){ c++; n/=10; }
    return c;
}

int main(){
    printf("%d", count(54321));
    return 0;
}
