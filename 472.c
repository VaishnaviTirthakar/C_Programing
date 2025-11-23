#include <stdio.h>

int main() {
    FILE *in = fopen("a.txt", "r");
    FILE *out = fopen("enc.txt", "w");
    char c;

    while ((c = fgetc(in)) != EOF)
        fputc(c + 3, out);

    fclose(in); fclose(out);
}
