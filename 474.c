#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    for (long i = size - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        putchar(fgetc(fp));
    }
    fclose(fp);
}
