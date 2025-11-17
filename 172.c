// Q. Swap first and last elements
#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5}, temp;
    temp=a[0];
    a[0]=a[4];
    a[4]=temp;
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
