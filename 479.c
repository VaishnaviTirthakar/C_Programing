#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    char line[200], max[200] = "";

    while (fgets(line, 200, fp))
        if (strlen(line) > strlen(max))
            strcpy(max, line);

    printf("Longest line:\n%s", max);
    fclose(fp);
}
