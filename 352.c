// Write a program to take structure input for a student.
#include <stdio.h>
struct Student { int roll; char name[20]; float marks; };
int main() {
    struct Student s;
    scanf("%d %s %f", &s.roll, s.name, &s.marks);
    printf("%d %s %.2f", s.roll, s.name, s.marks);
}
