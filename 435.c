// Q: Use union to store segment length or turn angle.
#include <stdio.h>

union Segment {
    float length;
    float turn;
};

int main() {
    union Segment s;

    s.length = 5.4;
    printf("Length = %.2f m\n", s.length);

    s.turn = 45.0;
    printf("Turn = %.2f deg\n", s.turn);

    return 0;
}
