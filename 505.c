/* Program: Replace a word "robot" with "bot" while reading file */
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    char word[100];

    while (fscanf(fp, "%s", word) != EOF) {
        if (strcmp(word, "robot") == 0)
            printf("bot ");
        else
            printf("%s ", word);
    }

    fclose(fp);
    return 0;
}
