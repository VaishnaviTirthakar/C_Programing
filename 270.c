/* Write a function to calculate area of circle */
#include <stdio.h>

float area(float r){
    return 3.14 * r * r;
}

int main(){
    printf("%f", area(5));
    return 0;
}
