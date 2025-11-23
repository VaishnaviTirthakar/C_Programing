/* Program: Write integers into binary file */
#include <stdio.h>

int main() {
    FILE *fp = fopen("bin.dat", "wb");
    int a[5] = {10,20,30,40,50};
    fwrite(a, sizeof(int), 5, fp);
    fclose(fp);
    return 0;
}
