// Q. Find sum of all elements in matrix
#include <stdio.h>
int main() {
    int a[2][3]={{1,2,3},{4,5,6}}, sum=0;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            sum+=a[i][j];
    printf("Sum = %d", sum);
    return 0;
}
