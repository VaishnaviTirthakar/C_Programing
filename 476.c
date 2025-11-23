#include <stdio.h>

int main() {
    FILE *fp = fopen("nums.txt", "r");
    int n;
    while (fscanf(fp, "%d", &n) != EOF)
        printf("%d ", n);
    fclose(fp);
}
