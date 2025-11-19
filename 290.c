/* Write a function to print odd numbers up to n */
#include <stdio.h>

void odd(int n){
    for(int i=1;i<=n;i++)
        if(i%2!=0) printf("%d ",i);
}

int main(){
    odd(20);
    return 0;
}
