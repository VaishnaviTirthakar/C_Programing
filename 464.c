#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "a"); // append mode
    fprintf(fp, "\nNew line added.");
    fclose(fp);
}
