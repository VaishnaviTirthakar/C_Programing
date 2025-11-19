/* Write a function to convert Fahrenheit to Celsius */
#include <stdio.h>

float fc(float f){
    return (f-32)*5/9;
}

int main(){
    printf("%f", fc(98.6));
    return 0;
}
