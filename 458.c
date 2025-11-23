// Q: Compare two files if they are same or not.
#include <stdio.h>

int main() {
    FILE *f1 = fopen("a.txt", "r");
    FILE *f2 = fopen("b.txt", "r");
    char c1, c2;
    int same = 1;

    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF)
        if (c1 != c2) same = 0;

    printf(same ? "Same" : "Different");
    fclose(f1);
    fclose(f2);
    return 0;
}
