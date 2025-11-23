// Q: Use union to store event ID or severity.
#include <stdio.h>

union Event {
    int id;
    int severity;
};

int main() {
    union Event e;

    e.id = 1001;
    printf("Event ID = %d\n", e.id);

    e.severity = 3;
    printf("Severity = %d\n", e.severity);

    return 0;
}
