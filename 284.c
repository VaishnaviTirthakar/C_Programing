/* Write a function to find smallest in array */
#include <stdio.h>

int smallest(int a[],int n){
    int m=a[0];
    for(int i=1;i<n;i++)
        if(a[i]<m) m=a[i];
    return m;
}

int main(){
    int arr[]={3,8,1,9,2};
    printf("%d", smallest(arr,5));
    return 0;
}
