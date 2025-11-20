// Write a program to use calloc for array.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++) printf("%d ", p[i]);
    free(p);
    return 0;
}
