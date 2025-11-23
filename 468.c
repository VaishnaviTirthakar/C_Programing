#include <stdio.h>

int main() {
    FILE *f1 = fopen("a.txt", "r");
    FILE *f2 = fopen("b.txt", "r");

    char c1, c2;
    int flag = 0;

    while ((c1 = fgetc(f1)) != EOF &&
           (c2 = fgetc(f2)) != EOF)
        if (c1 != c2) flag = 1;

    if (flag == 0) printf("Same");
    else printf("Different");

    fclose(f1); fclose(f2);
}
