// Q12: Use continue to print only vowels from A-Z
#include <stdio.h>
int main() {
    for(char c='A'; c<='Z'; c++){
        if(c!='A' && c!='E' && c!='I' && c!='O' && c!='U')
            continue;
        printf("%c ", c);
    }
}
