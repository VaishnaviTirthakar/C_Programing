// Q. Count positive numbers in matrix
#include <stdio.h>
int main() {
    int a[2][3]={{-1,2,-3},{4,-5,6}}, c=0;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            if(a[i][j] > 0) c++;
    printf("Positive count = %d", c);
    return 0;
}
