/* Write a function to check even or odd */
#include <stdio.h>

void check(int n) {
    if(n % 2 == 0) printf("Even");
    else printf("Odd");
}

int main() {
    check(11);
    return 0;
}
