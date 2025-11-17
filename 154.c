// Q. Find maximum element in array
#include <stdio.h>
int main() {
    int a[5]={3,9,1,7,5}, max=a[0];
    for(int i=1;i<5;i++)
        if(a[i] > max) max = a[i];
    printf("Max = %d", max);
    return 0;
}
