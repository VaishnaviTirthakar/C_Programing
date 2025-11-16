// Q6: Use goto to print numbers 1 to 5
#include <stdio.h>
int main() {
    int i=1;
    start:
    printf("%d ", i);
    i++;
    if(i<=5) goto start;
}
