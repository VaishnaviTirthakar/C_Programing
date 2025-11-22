// Write a program for structure with array members.
#include <stdio.h>
struct Marks{ int m[3]; };
int main() {
    struct Marks s = {{50, 60, 70}};
    printf("%d %d %d", s.m[0], s.m[1], s.m[2]);
}
