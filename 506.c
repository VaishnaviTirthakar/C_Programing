/* Program: Count spaces, tabs, and newlines in a file */
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    int ch, spaces = 0, tabs = 0, lines = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ') spaces++;
        else if (ch == '\t') tabs++;
        else if (ch == '\n') lines++;
    }

    printf("Spaces = %d\nTabs = %d\nLines = %d\n", spaces, tabs, lines);
    fclose(fp);
    return 0;
}
