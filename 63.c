//Positive, Negative or Zero
#include <stdio.h>
int main() {
    int n; printf("Enter integer: "); if(scanf("%d",&n)!=1) return 0;
    if(n > 0) printf("Positive\n"); else if(n < 0) printf("Negative\n"); else printf("Zero\n");
    return 0;
}
