// Q. Print alternate array elements
#include <stdio.h>
int main() {
    int a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i+=2)
        printf("%d ",a[i]);
    return 0;
}
