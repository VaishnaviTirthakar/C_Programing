// Program to display book details using structure.
#include <stdio.h>
struct Book{ char title[20]; int price; };
int main(){
    struct Book b={"CProgram",200};
    printf("%s %d", b.title, b.price);
}
