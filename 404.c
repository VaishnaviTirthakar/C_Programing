// Q: Use union to store robot mode: auto or manual.
#include <stdio.h>

union Mode {
    int autoMode;
    int manualMode;
};

int main() {
    union Mode m;

    m.autoMode = 1;
    printf("Auto Mode = %d\n", m.autoMode);

    m.manualMode = 0;
    printf("Manual Mode = %d\n", m.manualMode);

    return 0;
}
