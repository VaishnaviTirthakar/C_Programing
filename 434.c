// Q: Use union to store navigation type code or name.
#include <stdio.h>

union Nav {
    int type;
    char name[20];
};

int main() {
    union Nav n;

    n.type = 2;
    printf("Nav Type = %d\n", n.type);

    strcpy(n.name, "AUTO_NAV");
    printf("Nav Name = %s\n", n.name);

    return 0;
}
