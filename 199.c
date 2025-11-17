// Q. Copy one matrix to another
#include <stdio.h>
int main() {
    int a[2][2]={{1,2},{3,4}}, b[2][2];
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            b[i][j]=a[i][j];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
