// Write a program to define a structure for a student and display the details.
#include <stdio.h>
struct Student { int roll; char name[20]; float marks; };
int main() {
    struct Student s = {1, "Amit", 88.5};
    printf("%d %s %.2f", s.roll, s.name, s.marks);
}
