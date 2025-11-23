// Q: Use union to store message length or message code.
#include <stdio.h>

union Msg {
    int length;
    int code;
};

int main() {
    union Msg m;

    m.length = 50;
    printf("Message Length = %d\n", m.length);

    m.code = 200;
    printf("Message Code = %d\n", m.code);

    return 0;
}
