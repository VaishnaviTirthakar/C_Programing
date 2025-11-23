/* Program: Convert file text to UPPERCASE */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("data1.txt", "r");
    int ch;

    while ((ch = fgetc(fp)) != EOF)
        putchar(toupper(ch));

    fclose(fp);
    return 0;
}
