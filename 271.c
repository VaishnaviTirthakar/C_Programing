/* Write a function to return simple interest */
#include <stdio.h>

float si(float p, float r, float t){
    return (p*r*t)/100;
}

int main(){
    printf("%f", si(1000,5,2));
    return 0;
}
