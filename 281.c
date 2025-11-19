/* Write a function to print stars in a line */
#include <stdio.h>

void stars(int n){
    for(int i=1;i<=n;i++) printf("*");
}

int main(){
    stars(10);
    return 0;
}
