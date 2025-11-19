/* Write a function to calculate perimeter of rectangle */
#include <stdio.h>

int peri(int l,int b){
    return 2*(l+b);
}

int main(){
    printf("%d", peri(5,4));
    return 0;
}
