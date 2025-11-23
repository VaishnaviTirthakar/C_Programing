/* Program: Read integers from binary file */
#include <stdio.h>

int main() {
    FILE *fp = fopen("bin.dat", "rb");
    int a[5];

    fread(a, sizeof(int), 5, fp);

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    fclose(fp);
    return 0;
}
