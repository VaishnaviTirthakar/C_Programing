// Write a program to store and print employee details using structure.
#include <stdio.h>
struct Emp{ int id; char name[20]; float salary; };
int main() {
    struct Emp e = {101, "Ravi", 35000};
    printf("%d %s %.2f", e.id, e.name, e.salary);
}
