// Q. Find second largest element of array
#include <stdio.h>
int main() {
    int a[5]={10,50,30,20,40}, max=a[0], second=-1;
    for(int i=1;i<5;i++)
        if(a[i]>max){
            second=max;
            max=a[i];
        }
    printf("Second largest = %d", second);
    return 0;
}
