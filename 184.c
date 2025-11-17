// Q. Print secondary diagonal elements
#include <stdio.h>
int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
        printf("%d ", a[i][2-i]);
    return 0;
}
