// Q. Multiply each matrix element by 2
#include <stdio.h>
int main() {
    int a[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            a[i][j]*=2;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
