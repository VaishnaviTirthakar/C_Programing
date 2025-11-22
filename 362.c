// Program to compare two structures.
#include <stdio.h>
struct Num{ int a,b; };
int main(){
    struct Num n1={10,20}, n2={10,20};
    if(n1.a==n2.a && n1.b==n2.b) printf("Equal");
    else printf("Not Equal");
}
