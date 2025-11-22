// Program to sort students by marks using structure.
#include <stdio.h>
struct S{ int r; float m; };
int main(){
    struct S s[3]={{1,55},{2,40},{3,70}}, t;
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(s[i].m>s[j].m){ t=s[i]; s[i]=s[j]; s[j]=t; }
    for(int i=0;i<3;i++) printf("%d %.1f\n", s[i].r,s[i].m);
}
