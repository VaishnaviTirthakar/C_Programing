// Write a program to use pointer to structure array.
#include <stdio.h>
struct emp{ int id; };
int main(){
    struct emp e[2]={{1},{2}}, *p=e;
    printf("%d", (p+1)->id);
    return 0;
}
