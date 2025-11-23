#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    char c;
    int lines = 1;

    while ((c = fgetc(fp)) != EOF)
        if (c == '\n')
            lines++;

    printf("Lines = %d", lines);
    fclose(fp);
}
