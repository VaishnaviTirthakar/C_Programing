// Program to store date using structure.
#include <stdio.h>
struct Date{ int d,m,y; };
int main(){ struct Date dt={1,1,2024}; printf("%d-%d-%d",dt.d,dt.m,dt.y); }
