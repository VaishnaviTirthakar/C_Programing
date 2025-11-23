// Q: Store compass direction degree or cardinal letter.
#include <stdio.h>

union Compass {
    float degree;
    char letter;
};

int main() {
    union Compass c;

    c.degree = 180.0;
    printf("Degree = %.2f\n", c.degree);

    c.letter = 'S';
    printf("Direction = %c\n", c.letter);

    return 0;
}
