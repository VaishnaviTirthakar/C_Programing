/* Write a function to print n natural numbers */
#include <stdio.h>

void natural(int n){
    for(int i=1;i<=n;i++) printf("%d ",i);
}

int main(){
    natural(10);
    return 0;
}
