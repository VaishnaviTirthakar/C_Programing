// Q. Count negative numbers in array
#include <stdio.h>
int main() {
    int a[6]={2,-3,5,-1,7,0}, c=0;
    for(int i=0;i<6;i++)
        if(a[i] < 0) c++;
    printf("Negative count = %d", c);
    return 0;
}
