#include <stdio.h>

struct Student { int roll; char name[20]; };

int main() {
    struct Student s;
    FILE *fp = fopen("stu.dat", "rb");
    fread(&s, sizeof(s), 1, fp);
    printf("%d %s", s.roll, s.name);
    fclose(fp);
}
