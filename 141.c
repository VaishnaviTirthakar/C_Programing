// Q7: Use return to stop program when input is negative
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Negative number! Ending program.");
        return 0;
    }
    printf("You entered: %d", n);
}
