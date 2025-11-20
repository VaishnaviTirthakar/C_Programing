// Write a program to use pointer to structure.
#include <stdio.h>
struct student{ int roll; float marks; };
int main(){
    struct student s={1,95.5}, *p=&s;
    printf("%d %.1f", p->roll, p->marks);
    return 0;
}
