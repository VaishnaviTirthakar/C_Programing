// Q: Store robot AI state code or status message.
#include <stdio.h>

union AI {
    int code;
    char status[20];
};

int main() {
    union AI a;

    a.code = 5;
    printf("AI Code = %d\n", a.code);

    strcpy(a.status, "RUNNING");
    printf("AI Status = %s\n", a.status);

    return 0;
}
