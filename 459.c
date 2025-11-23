// Q: Check whether a file exists.
#include <stdio.h>

int main() {
    FILE *fp = fopen("check.txt", "r");
    if (fp) {
        printf("File exists");
        fclose(fp);
    } else printf("File not found");
    return 0;
}
