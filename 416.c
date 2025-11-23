// Q: Use union to store payload weight or volume.
#include <stdio.h>

union Payload {
    float weight;
    float volume;
};

int main() {
    union Payload p;

    p.weight = 12.5;
    printf("Payload Weight = %.2f KG\n", p.weight);

    p.volume = 6.7;
    printf("Payload Volume = %.2f L\n", p.volume);

    return 0;
}
