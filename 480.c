#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    fseek(fp, -1, SEEK_END);

    long pos = ftell(fp);

    while (pos >= 0) {
        fseek(fp, pos--, SEEK_SET);
        putchar(fgetc(fp));
    }
    fclose(fp);
}
