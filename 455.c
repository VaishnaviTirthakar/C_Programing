// Q: Count words in a file.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    int words = 0; char ch, prev = ' ';
    while ((ch = fgetc(fp)) != EOF) {
        if (!isspace(ch) && isspace(prev)) words++;
        prev = ch;
    }
    printf("Words = %d", words);
    fclose(fp);
    return 0;
}
