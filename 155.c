// Q. Find minimum element in array
#include <stdio.h>
int main() {
    int a[5]={4,8,1,9,2}, min=a[0];
    for(int i=1;i<5;i++)
        if(a[i] < min) min = a[i];
    printf("Min = %d", min);
    return 0;
}
