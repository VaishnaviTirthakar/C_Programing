#include <stdio.h>

int main() {
    FILE *f1 = fopen("a.txt", "r");
    FILE *f2 = fopen("b.txt", "r");
    FILE *m = fopen("merge.txt", "w");
    char c;

    while ((c = fgetc(f1)) != EOF) fputc(c, m);
    while ((c = fgetc(f2)) != EOF) fputc(c, m);

    fclose(f1); fclose(f2); fclose(m);
}
