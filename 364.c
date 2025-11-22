// Program to calculate average marks using structure.
#include <stdio.h>
struct Sub{ float m1,m2,m3; };
int main(){
    struct Sub s={50,60,70};
    printf("%.2f",(s.m1+s.m2+s.m3)/3);
}
