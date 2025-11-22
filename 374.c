// Program to store product info and display bill.
#include <stdio.h>
struct Product{ char n[20]; float p; int q; };
int main(){
    struct Product p={"Pen",10.5,3};
    printf("%.2f", p.p*p.q);
}
