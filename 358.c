// Write a program to return structure from function.
#include <stdio.h>
struct Point{ int x,y; };
struct Point get(){ struct Point p={5,6}; return p; }
int main(){ struct Point p=get(); printf("%d %d", p.x, p.y); }
