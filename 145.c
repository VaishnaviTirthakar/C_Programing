// Q11: Use break to stop when first negative number is found
#include <stdio.h>
int main() {
    int n;
    for(int i=1;i<=10;i++){
        scanf("%d",&n);
        if(n<0) {
            printf("Negative number found!");
            break;
        }
    }
}
