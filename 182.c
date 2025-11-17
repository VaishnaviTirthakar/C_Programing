// Q. Find smallest element in matrix
#include <stdio.h>
int main() {
    int a[2][3]={{3,9,1},{7,2,8}}, min=a[0][0];
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            if(a[i][j] < min) min=a[i][j];
    printf("Min = %d", min);
    return 0;
}
