// Write a program to pass structure to function.
#include <stdio.h>
struct Point{ int x,y; };
void show(struct Point p)
{ 
    printf("%d %d", p.x, p.y); 
}
int main()
{ 
    struct Point p={10,20}; show(p); 
}
