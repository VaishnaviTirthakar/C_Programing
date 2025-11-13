#include <stdio.h>
int main() {
    int marks = 85;
    if ((marks >= 80 && marks <= 100) || marks == 75)
        printf("You passed with good marks!\n");
    else
        printf("You need improvement.\n");
    return 0;
}
