//Character is Digit?
#include <stdio.h>
int main() {
    char c; printf("Enter a character: "); if(scanf(" %c",&c)!=1) return 0;
    if(c>='0' && c<='9') printf("Digit\n"); else printf("Not digit\n");
    return 0;
}
