#include <stdio.h>

struct Student { int roll; char name[20]; };

int main() {
    struct Student s = {1, "Amit"};
    FILE *fp = fopen("stu.dat", "wb");
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}
