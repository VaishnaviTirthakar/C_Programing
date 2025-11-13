#include <stdio.h>
int main() {
    int age = 70;
    if (age < 18 || age > 60)
        printf("Not eligible for work\n");
    else
        printf("Eligible for work\n");
    return 0;
}
