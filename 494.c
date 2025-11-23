/* Program: Count vowels in a file */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("data1.txt", "r");
    int ch, count = 0;

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }

    printf("Total vowels = %d\n", count);
    fclose(fp);
    return 0;
}
