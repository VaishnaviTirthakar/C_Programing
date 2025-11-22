// Program to use structure with string input.
#include <stdio.h>
struct Car{ char name[20]; int model; };
int main(){
    struct Car c;
    scanf("%s %d", c.name, &c.model);
    printf("%s %d", c.name,c.model);
}
