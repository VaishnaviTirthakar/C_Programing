// Program using structure in loop to store 5 integers.
#include <stdio.h>
struct Num{ int x; };
int main(){
    struct Num n[5];
    for(int i=0;i<5;i++) n[i].x=i+1;
    for(int i=0;i<5;i++) printf("%d ", n[i].x);
}
