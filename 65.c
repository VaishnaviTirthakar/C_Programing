//Uppercase, Lowercase or Other
#include <stdio.h>
int main() {
    char c; printf("Enter a character: "); if(scanf(" %c",&c)!=1) return 0;
    if(c >= 'A' && c <= 'Z') printf("Uppercase\n");
    else if(c >= 'a' && c <= 'z') printf("Lowercase\n");
    else printf("Neither letter\n");
    return 0;
}
