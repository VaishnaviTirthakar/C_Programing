/* Program: Copy only vowels from source file to new file */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f1 = fopen("input.txt", "r");
    FILE *f2 = fopen("vowels.txt", "w");
    int ch;

    while ((ch = fgetc(f1)) != EOF) {
        ch = tolower(ch);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}
