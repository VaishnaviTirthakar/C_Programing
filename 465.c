#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    char c;
    int words = 0;

    while ((c = fgetc(fp)) != EOF)
        if (c == ' ' || c == '\n')
            words++;

    printf("Words = %d", words);
    fclose(fp);
}
