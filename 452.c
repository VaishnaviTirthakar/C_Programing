// Q: Append data to an existing file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");
    fprintf(fp, "\nAppended line.");
    fclose(fp);
    return 0;
}
