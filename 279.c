/* Write a function to check Armstrong number */
#include <stdio.h>

int isArm(int n){
    int temp=n,sum=0;
    while(temp){
        int d=temp%10;
        sum+=d*d*d;
        temp/=10;
    }
    return sum==n;
}

int main(){
    printf("%s", isArm(153)?"Armstrong":"Not");
    return 0;
}
