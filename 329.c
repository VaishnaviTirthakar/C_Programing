// Write a program to search an element in array using pointer.
#include <stdio.h>
int main(){
    int a[]={1,5,9,3}, key=9, *p=a;
    for(int i=0;i<4;i++)
        if(*(p+i)==key) printf("Found");
    return 0;
}
