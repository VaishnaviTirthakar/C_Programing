#include <stdio.h>

int main() {
    FILE *fp = fopen("odd.txt", "w");
    for (int i = 1; i <= 19; i += 2)
        fprintf(fp, "%d\n", i);
    fclose(fp);
}
