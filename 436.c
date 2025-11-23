// Q: Store packet size or priority using union.
#include <stdio.h>

union Net {
    int size;
    int priority;
};

int main() {
    union Net n;

    n.size = 256;
    printf("Size = %d bytes\n", n.size);

    n.priority = 1;
    printf("Priority = %d\n", n.priority);

    return 0;
}
