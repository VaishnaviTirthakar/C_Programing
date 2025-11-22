// Program to store multiple students using array of structure.
#include <stdio.h>
struct Student{ int r; float m; };
int main(){
    struct Student s[3]={{1,50},{2,60},{3,70}};
    for(int i=0;i<3;i++) printf("%d %.1f\n", s[i].r, s[i].m);
}
