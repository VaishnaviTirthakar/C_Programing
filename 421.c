// Q: Use union to store packet ID or packet character.
#include <stdio.h>

union Packet {
    int id;
    char ch;
};

int main() {
    union Packet p;

    p.id = 101;
    printf("Packet ID = %d\n", p.id);

    p.ch = 'X';
    printf("Packet Char = %c\n", p.ch);

    return 0;
}
