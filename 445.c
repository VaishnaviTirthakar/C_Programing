// Q: Store mode ID or mode symbol.
#include <stdio.h>

union Mode {
    int id;
    char symbol;
};

int main() {
    union Mode m;

    m.id = 4;
    printf("Mode ID = %d\n", m.id);

    m.symbol = 'A';
    printf("Mode Symbol = %c\n", m.symbol);

    return 0;
}
