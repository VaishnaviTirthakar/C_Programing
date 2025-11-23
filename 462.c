#include <stdio.h>

int main() {
    char c;
    FILE *fp = fopen("a.txt", "r"); // read file
    while ((c = fgetc(fp)) != EOF)
        putchar(c);
    fclose(fp);
}
