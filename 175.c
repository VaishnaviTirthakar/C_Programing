// Q. Check if array is sorted or not
#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5}, sorted=1;
    for(int i=0;i<4;i++)
        if(a[i] > a[i+1]) sorted=0;
    if(sorted) printf("Sorted");
    else printf("Not Sorted");
    return 0;
}
