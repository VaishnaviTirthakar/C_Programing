// Program to find student with highest marks.
#include <stdio.h>
struct S{ int r; float m; };
int main(){
    struct S s[3]={{1,20},{2,80},{3,60}}, max=s[0];
    for(int i=1;i<3;i++) if(s[i].m>max.m) max=s[i];
    printf("%d %.1f", max.r,max.m);
}
