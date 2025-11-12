#include <stdio.h>
#include <complex.h>
int main() {
    double imaginary y = 5.0 * I;
    printf("Imaginary part = %.1f", cimag(y));
    return 0;
}
