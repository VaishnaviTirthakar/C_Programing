// Q. Find frequency of each element (0-4 range)
#include <stdio.h>
int main() {
    int a[5]={1,2,1,3,2}, f[5]={0};
    for(int i=0;i<5;i++)
        f[a[i]]++;
    for(int i=0;i<5;i++)
        printf("%d ", f[i]);
    return 0;
}
