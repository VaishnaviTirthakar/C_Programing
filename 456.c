// Q: Count number of lines in a file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    int lines = 0; char ch;
    while ((ch = fgetc(fp)) != EOF)
        if (ch == '\n') lines++;
    printf("Lines = %d", lines + 1);
    fclose(fp);
    return 0;
}
