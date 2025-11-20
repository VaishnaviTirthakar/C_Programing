// Write a program to use pointer to pointer for string.
#include <stdio.h>
int main(){
    char *s="Hello";
    char **p=&s;
    printf("%s", *p);
    return 0;
}
