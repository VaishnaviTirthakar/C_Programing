/* Write a function to convert hours to minutes */
#include <stdio.h>

int toMinutes(int hr) {
    return hr * 60;
}

int main() {
    printf("%d", toMinutes(3));
    return 0;
}
