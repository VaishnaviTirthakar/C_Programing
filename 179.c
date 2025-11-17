// Q. Print row-wise sum of matrix
#include <stdio.h>
int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++)
            sum+=a[i][j];
        printf("Row %d sum = %d\n", i, sum);
    }
    return 0;
}
