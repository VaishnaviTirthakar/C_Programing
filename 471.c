#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "r");

    if (fp == NULL)
        printf("File not found");
    else
        printf("File exists");

    fclose(fp);
}
