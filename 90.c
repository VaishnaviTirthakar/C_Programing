//Character is Alphanumeric?
#include <stdio.h>
int main() {
    char c; printf("Enter char: "); if(scanf(" %c",&c)!=1) return 0;
    if( (c>='0' && c<='9') || (c>='A' && c<='Z') || (c>='a' && c<='z') ) printf("Alphanumeric\n");
    else printf("Special character\n");
    return 0;
}
