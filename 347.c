// Write a program to reverse string in-place using pointers.
#include <stdio.h>
#include <string.h>
int main(){
    char s[]="abcd", *p=s;
    int i=0, j=strlen(s)-1;
    while(i<j){
        char t=p[i];
        p[i]=p[j];
        p[j]=t;
        i++; j--;
    }
    printf("%s", s);
    return 0;
}
