#include <stdio.h>
enum Level {LOW, MEDIUM, HIGH};
int main() {
    enum Level l = HIGH;
    printf("Level = %d", l);
    return 0;
}
