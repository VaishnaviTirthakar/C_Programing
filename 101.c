//Character: Special or Not (not alnum)
#include <stdio.h>
int main() {
    char c; printf("Enter char: "); if(scanf(" %c",&c)!=1) return 0;
    if( (c>='0'&&c<='9') || (c>='A'&&c<='Z') || (c>='a'&&c<='z') ) printf("Not special\n");
    else printf("Special character\n");
    return 0;
}
