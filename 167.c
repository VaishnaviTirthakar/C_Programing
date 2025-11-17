// Q. Replace negative numbers with 0
#include <stdio.h>
int main() {
    int a[6]={3,-2,5,-7,8,-1};
    for(int i=0;i<6;i++){
        if(a[i] < 0) a[i]=0;
        printf("%d ",a[i]);
    }
    return 0;
}
