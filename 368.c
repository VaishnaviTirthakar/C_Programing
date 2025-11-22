// Program using structure inside structure.
#include <stdio.h>
struct Marks{ int m1,m2; };
struct Student{ int roll; struct Marks mk; };
int main(){
    struct Student s={1,{40,50}};
    printf("%d %d %d", s.roll, s.mk.m1, s.mk.m2);
}
