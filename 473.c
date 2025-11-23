#include <stdio.h>

int main() {
    FILE *in = fopen("enc.txt", "r");
    FILE *out = fopen("dec.txt", "w");
    char c;

    while ((c = fgetc(in)) != EOF)
        fputc(c - 3, out);

    fclose(in); fclose(out);
}
