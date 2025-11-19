/* Write a function to find average of array */
#include <stdio.h>

float avg(int a[], int n){
    int s=0;
    for(int i=0;i<n;i++) s+=a[i];
    return s/(float)n;
}

int main(){
    int arr[]={1,2,3,4,5};
    printf("%f", avg(arr,5));
    return 0;
}
