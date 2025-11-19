/* Write a function to convert Celsius to Fahrenheit */
#include <stdio.h>

float cf(float c){
    return (c*9/5)+32;
}

int main(){
    printf("%f", cf(37));
    return 0;
}
