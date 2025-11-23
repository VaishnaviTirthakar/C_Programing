// Q: Write integers 1 to 10 into a file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("nums.txt", "w");
    for (int i = 1; i <= 10; i++)
        fprintf(fp, "%d ", i);
    fclose(fp);
    return 
