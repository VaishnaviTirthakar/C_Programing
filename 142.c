// Q8: Use break to stop taking input when user enters 0
#include <stdio.h>
int main() {
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        printf("You entered: %d\n", n);
    }
}
