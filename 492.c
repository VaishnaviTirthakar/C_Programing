/* Program: Read student names from file */
#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "r");
    char name[50];

    while (fscanf(fp, "%s", name) != EOF)
        printf("%s\n", name);

    fclose(fp);
    return 0;
}
