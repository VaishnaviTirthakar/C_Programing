// Q: Write multiple lines to a file using loop.
#include <stdio.h>

int main() {
    FILE *fp = fopen("multi.txt", "w");
    for (int i = 1; i <= 5; i++)
        fprintf(fp, "Line %d\n", i);
    fclose(fp);
    return 0;
}
