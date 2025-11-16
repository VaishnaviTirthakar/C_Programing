// Q14: Use return inside loop to stop execution when i==3
#include <stdio.h>
int main() {
    for(int i=1; i<=5; i++){
        if(i==3){
            printf("Stopping at 3");
            return 0;
        }
        printf("%d ", i);
    }
}
