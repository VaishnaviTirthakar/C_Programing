// Write a program to allocate memory using malloc.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    *p = 50;
    printf("%d", *p);
    free(p);
    return 0;
}
