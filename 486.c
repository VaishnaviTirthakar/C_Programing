#include <stdio.h>

int main() {
    FILE *fp = fopen("even.txt", "w");
    for (int i = 2; i <= 20; i += 2)
        fprintf(fp, "%d\n", i);
    fclose(fp);
}
