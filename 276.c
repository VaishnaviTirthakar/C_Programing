/* Write a function to print sum of first n natural numbers */
#include <stdio.h>

int sumN(int n){
    int s=0;
    for(int i=1;i<=n;i++) s+=i;
    return s;
}

int main(){
    printf("%d", sumN(10));
    return 0;
}
