#include <stdio.h>
int main() {
    int hasTicket = 1, hasID = 0;
    if (hasTicket && hasID)
        printf("You can enter the hall.\n");
    else
        printf("Entry denied.\n");
    return 0;
}
