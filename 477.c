#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    char c;
    int v = 0;

    while ((c = fgetc(fp)) != EOF) {
        c = tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            v++;
    }

    printf("Vowels = %d", v);
    fclose(fp);
}
