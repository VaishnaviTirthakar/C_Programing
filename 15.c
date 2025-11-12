#include <stdio.h>
#include <complex.h>
int main() {
    double complex z = 2.0 + 3.0*I;
    printf("Complex number = %.1f + %.1fi", creal(z), cimag(z));
    return 0;
}
