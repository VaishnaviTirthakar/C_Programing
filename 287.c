/* Write a function to calculate compound interest */
#include <stdio.h>
#include <math.h>

float ci(float p,float r,float t){
    return p*pow((1+r/100),t)-p;
}

int main(){
    printf("%f", ci(1000,5,2));
    return 0;
}
