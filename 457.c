// Q: Copy contents of one file to another.
#include <stdio.h>

int main() {
    FILE *src = fopen("a.txt", "r");
    FILE *dest = fopen("b.txt", "w");
    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    fclose(src);
    fclose(dest);
    return 0;
}
