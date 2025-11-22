// Program for student pass/fail using structure.
#include <stdio.h>
struct S{ int r; float m; };
int main(){
    struct S s={10,40};
    if(s.m>=35) printf("Pass"); else printf("Fail");
}
