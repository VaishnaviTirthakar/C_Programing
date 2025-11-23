/* Program: Read structure data from a file */
#include <stdio.h>

struct Robot {
    int id;
    char name[20];
};

int main() {
    FILE *fp = fopen("robot.txt", "r");
    struct Robot r;
    fscanf(fp, "%d %s", &r.id, r.name);
    printf("ID: %d  Name: %s\n", r.id, r.name);
    fclose(fp);
    return 0;
}
