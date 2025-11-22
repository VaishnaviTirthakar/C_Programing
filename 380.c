// Program with structure containing another structure array.
#include <stdio.h>
struct Marks{ int m[3]; };
struct Student{ int r; struct Marks mk; };
int main(){
    struct Student s={1,{{50,60,70}}};
    printf("%d %d", s.r,s.mk.m[1]);
}
