/* Write a function to print table of a number */
#include <stdio.h>

void table(int n){
    for(int i=1;i<=10;i++)
        printf("%d\n", n*i);
}

int main(){
    table(5);
    return 0;
}
