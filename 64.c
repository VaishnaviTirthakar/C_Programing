//Vowel or Consonant (single char)
#include <stdio.h>
int main() {
    char c; printf("Enter a letter: "); if(scanf(" %c",&c)!=1) return 0;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("Vowel\n"); else printf("Consonant\n");
    return 0;
}
