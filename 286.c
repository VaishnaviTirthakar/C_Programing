/* Write a function to check positive or negative */
#include <stdio.h>

void checkPN(int n){
    if(n>0) printf("Positive");
    else if(n<0) printf("Negative");
    else printf("Zero");
}

int main(){
    checkPN(-5);
    return 0;
}
