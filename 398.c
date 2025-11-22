// Write a program to store robot battery info using structure.
#include <stdio.h>
struct Battery { int level; float voltage; };
int main() {
    struct Battery b = {85, 12.4};
    printf("Battery: %d%%  Voltage: %.1fV", b.level, b.voltage);
}
