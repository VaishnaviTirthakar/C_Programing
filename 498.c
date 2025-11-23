/* Program: Write structure data into a file */
#include <stdio.h>

struct Robot {
    int id;
    char name[20];
};

int main() {
    FILE *fp = fopen("robot.txt", "w");
    struct Robot r = {101, "AlphaBot"};
    fprintf(fp, "%d %s\n", r.id, r.name);
    fclose(fp);
    return 0;
}
