// Write a program to use array of structures.
#include <stdio.h>
struct Book{ int id; char title[20]; };
int main() {
    struct Book b[2] = {{1,"C"}, {2,"DS"}};
    for(int i=0;i<2;i++) printf("%d %s\n", b[i].id, b[i].title);
}
