// Q: Use union to store sound level or frequency.
#include <stdio.h>

union Sound {
    int level;
    float freq;
};

int main() {
    union Sound s;

    s.level = 60;
    printf("Sound Level = %d dB\n", s.level);

    s.freq = 440.0;
    printf("Frequency = %.2f Hz\n", s.freq);

    return 0;
}
