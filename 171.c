// Q. Find index of a given element
#include <stdio.h>
int main() {
    int a[5]={10,20,30,40,50}, key=30;
    for(int i=0;i<5;i++)
        if(a[i]==key) printf("Index = %d", i);
    return 0;
}
