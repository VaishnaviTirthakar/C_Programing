// Q: Read and display the contents of a file.
#include <stdio.h>

int main() {
    char ch;
    FILE *fp = fopen("data.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
