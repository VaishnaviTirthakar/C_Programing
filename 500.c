// Q: Write a program to create a file and write text into it.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    fprintf(fp, "Hello File!");
    fclose(fp);
    return 0;
}
