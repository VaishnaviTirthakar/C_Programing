// Q2: Use break to stop an infinite loop after 5 iterations
#include <stdio.h>
int main() {
    int i=1;
    while(1){
        printf("%d ", i);
        if(i==5) break;
        i++;
    }
}
