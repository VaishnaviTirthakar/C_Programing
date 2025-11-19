/* Write a function to return grade based on marks */
#include <stdio.h>

char grade(int m) {
    if(m >= 90) return 'A';
    if(m >= 70) return 'B';
    if(m >= 50) return 'C';
    return 'F';
}

int main() {
    printf("%c", grade(85));
    return 0;
}
