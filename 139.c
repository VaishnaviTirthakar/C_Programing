// Q5: Use goto to jump to a label and print a message
#include <stdio.h>
int main() {
    printf("Before jump\n");
    goto jump;
    printf("This will not print\n");

    jump:
    printf("After jump\n");
}
