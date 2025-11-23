// Q: Store robot command ID or command value in union.
#include <stdio.h>

union Command {
    int id;
    char value;
};

int main() {
    union Command c;

    c.id = 101;
    printf("Command ID = %d\n", c.id);

    c.value = 'A';
    printf("Command Value = %c\n", c.value);

    return 0;
}
