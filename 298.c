/* Write a function to check if a number is perfect */
#include <stdio.h>

int isPerfect(int n) {
    int s = 0;
    for(int i = 1; i < n; i++)
        if(n % i == 0) s += i;
    return s == n;
}

int main() {
    printf("%s", isPerfect(28) ? "Perfect" : "Not Perfect");
    return 0;
}
