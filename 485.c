#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("a.txt", "r");
    FILE *out = fopen("lower.txt", "w");
    char c;

    while ((c = fgetc(in)) != EOF)
        fputc(tolower(c), out);

    fclose(in); fclose(out);
}
