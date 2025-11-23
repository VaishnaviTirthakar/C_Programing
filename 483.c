#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    char c; int d = 0;

    while ((c = fgetc(fp)) != EOF)
        if (isdigit(c)) d++;

    printf("Digits = %d", d);
    fclose(fp);
}
