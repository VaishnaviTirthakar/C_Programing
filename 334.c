// Write a program to swap two strings using pointers.
#include <stdio.h>
int main(){
    char *a="One", *b="Two", *t;
    t=a; a=b; b=t;
    printf("%s %s", a,b);
    return 0;
}
