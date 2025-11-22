// Write a program to use typedef with structure.
#include <stdio.h>
typedef struct Student{ int id; char name[20]; } STU;
int main(){ STU s={1,"Raj"}; printf("%d %s", s.id, s.name); }
