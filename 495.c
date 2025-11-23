/* Program: Find largest integer from file */
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, max = -9999;

    while (fscanf(fp, "%d", &num) != EOF)
        if (num > max)
            max = num;

    printf("Largest number = %d\n", max);
    fclose(fp);
    return 0;
}
