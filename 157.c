// Q. Count odd numbers in array
#include <stdio.h>
int main() {
    int a[6]={1,2,3,4,5,6}, count=0;
    for(int i=0;i<6;i++)
        if(a[i] % 2 != 0) count++;
    printf("Odd count = %d", count);
    return 0;
}
