// Program to enter and display 3 employee data.
#include <stdio.h>
struct Emp{ int id; char n[20]; };
int main(){
    struct Emp e[3];
    for(int i=0;i<3;i++) scanf("%d %s",&e[i].id,e[i].n);
    for(int i=0;i<3;i++) printf("%d %s\n",e[i].id,e[i].n);
}
