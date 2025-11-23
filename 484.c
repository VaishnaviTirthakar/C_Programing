#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("a.txt", "r");
    FILE *out = fopen("upper.txt", "w");
    char c;

    while ((c = fgetc(in)) != EOF)
        fputc(toupper(c), out);

    fclose(in); fclose(out);
}
