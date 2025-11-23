#include <stdio.h>

int main() {
    FILE *fp = fopen("nums.txt", "w");
    for (int i = 1; i <= 10; i++)
        fprintf(fp, "%d ", i);
    fclose(fp);
}
