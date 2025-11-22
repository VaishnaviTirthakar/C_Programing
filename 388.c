// Program to store laptop info using structure.
#include <stdio.h>
struct Laptop{ char name[20]; int price; };
int main(){
    struct Laptop l={"Dell",45000};
    printf("%s %d",l.name,l.price);
}
