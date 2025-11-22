// Program to store movie details using structure.
#include <stdio.h>
struct Movie{ char name[20]; int year; };
int main(){
    struct Movie m={"KGF",2022};
    printf("%s %d", m.name,m.year);
}
