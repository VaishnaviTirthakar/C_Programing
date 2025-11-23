/* Program: Count number of digits (0–9) in a file */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    int ch, digits = 0;

    while ((ch = fgetc(fp)) != EOF)
        if (isdigit(ch))
            digits++;

    printf("Digits in file = %d\n", digits);
    fclose(fp);
    return 0;
}
