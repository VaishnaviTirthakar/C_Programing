#include <stdio.h>
int main() {
    volatile int value = 10;
    printf("Volatile value = %d", value);
    return 0;
}
