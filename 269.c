/* Write a function to calculate power of a number */
#include <stdio.h>

int power(int b, int e){
    int p=1;
    for(int i=1;i<=e;i++) p*=b;
    return p;
}

int main(){
    printf("%d", power(2,5));
    return 0;
}
