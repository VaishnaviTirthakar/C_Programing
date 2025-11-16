// Q13: Use goto to go to error message if number is > 100
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    if(n>100)
        goto error;

    printf("Valid number: %d", n);
    return 0;

    error:
    printf("Error! Number too large.");
}
