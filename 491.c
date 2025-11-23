/* Program: Write 5 student names into a file */
#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    char name[50];

    for (int i = 1; i <= 5; i++) {
        printf("Enter name %d: ", i);
        scanf("%s", name);
        fprintf(fp, "%s\n", name);
    }

    fclose(fp);
    return 0;
}
