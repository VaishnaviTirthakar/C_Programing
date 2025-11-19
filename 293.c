/* Write a function to convert days to weeks */
#include <stdio.h>

float weeks(int d){
    return d/7.0;
}

int main(){
    printf("%f", weeks(14));
    return 0;
}
