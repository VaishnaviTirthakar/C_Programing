// Q. Find average of array elements
#include <stdio.h>
int main() {
    int a[5]={10,20,30,40,50}, sum=0;
    for(int i=0;i<5;i++)
        sum+=a[i];
    printf("Average = %.2f", sum/5.0);
    return 0;
}
