// Q: Store memory register number or byte data.
#include <stdio.h>

union Reg {
    int regNo;
    char byte;
};

int main() {
    union Reg r;

    r.regNo = 10;
    printf("Register = %d\n", r.regNo);

    r.byte = 'B';
    printf("Byte = %c\n", r.byte);

    return 0;
}
