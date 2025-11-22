// Write a program using nested structures.
#include <stdio.h>
struct Address{ char city[20]; int pincode; };
struct Person{ char name[20]; struct Address a; };
int main() {
    struct Person p={"Ram", {"Mumbai", 400001}};
    printf("%s %s %d", p.name, p.a.city, p.a.pincode);
}
