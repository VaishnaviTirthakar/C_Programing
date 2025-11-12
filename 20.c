#include <stdio.h>
union Data {
    int i;
    float f;
    char c;
};
int main() {
    union Data d;
    d.i = 10;
    printf("Union int = %d", d.i);
    return 0;
}

