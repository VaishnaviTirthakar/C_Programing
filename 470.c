#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "w"); // empty file
    fclose(fp);
}
