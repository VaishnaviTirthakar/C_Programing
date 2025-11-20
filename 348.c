// Write a program to use pointer with array of strings.
#include <stdio.h>
int main(){
    char *a[]={"one","two","three"};
    char **p=a;
    printf("%s", *(p+1));
    return 0;
}
