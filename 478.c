#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    char word[50];

    while (fscanf(fp, "%s", word) != EOF) {
        if (strcmp(word, "old") == 0)
            fprintf(temp, "new ");
        else
            fprintf(temp, "%s ", word);
    }

    fclose(fp); fclose(temp);
}
