/* Write a function to return absolute value */
#include <stdio.h>

int absolute(int n){
    return n<0 ? -n : n;
}

int main(){
    printf("%d", absolute(-22));
    return 0;
}
