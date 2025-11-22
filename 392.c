// Program using structure to store and print car mileage.
#include <stdio.h>
struct Car{ char n[20]; float m; };
int main(){
    struct Car c={"Swift",22.5};
    printf("%s %.1f", c.n,c.m);
}
