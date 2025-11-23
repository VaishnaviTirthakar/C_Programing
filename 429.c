// Q: Store gripper force or gripper open level.
#include <stdio.h>

union Gripper {
    float force;
    int openLevel;
};

int main() {
    union Gripper g;

    g.force = 23.5;
    printf("Gripper Force = %.2f N\n", g.force);

    g.openLevel = 80;
    printf("Open Level = %d%%\n", g.openLevel);

    return 0;
}
