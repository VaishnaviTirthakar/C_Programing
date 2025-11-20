// Write a program to compare two strings using pointers.
#include <stdio.h>
int main(){
    char a[]="cat", b[]="car";
    char *p=a, *q=b;
    int flag=0;
    while(*p && *q){
        if(*p!=*q){ flag=1; break; }
        p++; q++;
    }
    printf(flag?"Not Same":"Same");
    return 0;
}
