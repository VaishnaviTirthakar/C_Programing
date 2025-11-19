/* Write a function to search an element in array */
#include <stdio.h>

int search(int a[],int n,int key){
    for(int i=0;i<n;i++)
        if(a[i]==key) return i;
    return -1;
}

int main(){
    int arr[]={5,7,2,9};
    printf("%d", search(arr,4,2));
    return 0;
}
