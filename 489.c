#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    char word[50];
    int found = 0;

    while (fscanf(fp, "%s", word) != EOF)
        if (strcmp(word, "hello") == 0) found = 1;

    printf(found ? "Found" : "Not found");
    fclose(fp);
}
