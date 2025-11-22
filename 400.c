// Write a program to store robot arm coordinates using nested structure.
#include <stdio.h>
struct Coor { int x,y,z; };
struct Arm { char name[20]; struct Coor pos; };
int main() {
    struct Arm a = {"Arm1",{5,10,15}};
    printf("%s (%d,%d,%d)", a.name,a.pos.x,a.pos.y,a.pos.z);
}
