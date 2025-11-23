// Q: Use union to store motor direction as int or char.
#include <stdio.h>

union Direction {
    int dirCode;
    char dirChar;
};

int main() {
    union Direction d;

    d.dirCode = 1;
    printf("Direction Code = %d\n", d.dirCode);

    d.dirChar = 'R';
    printf("Direction Char = %c\n", d.dirChar);

    return 0;
}
