/* Write a function to print even numbers up to n */
#include <stdio.h>

void even(int n){
    for(int i=1;i<=n;i++)
        if(i%2==0) printf("%d ",i);
}

int main(){
    even(20);
    return 0;
}
