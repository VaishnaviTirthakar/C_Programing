// Q: Use union to store emergency stop code or message.
#include <stdio.h>

union Emergency {
    int code;
    char msg[30];
};

int main() {
    union Emergency e;

    e.code = 9;
    printf("Emergency Code = %d\n", e.code);

    strcpy(e.msg, "STOP IMMEDIATELY");
    printf("Message = %s\n", e.msg);

    return 0;
}
