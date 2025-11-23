#include <stdio.h>

int main() {
    FILE *src = fopen("a.txt", "r");
    FILE *dest = fopen("b.txt", "w");
    char c;

    while ((c = fgetc(src)) != EOF)
        fputc(c, dest);

    fclose(src);
    fclose(dest);
}
