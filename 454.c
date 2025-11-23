// Q: Count characters in a file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    int count = 0; char ch;
    while ((ch = fgetc(fp)) != EOF) count++;
    printf("Chars = %d", count);
    fclose(fp);
    return 0;
}
