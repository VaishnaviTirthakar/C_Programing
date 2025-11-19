/* Write a function to check vowel or consonant */
#include <stdio.h>

int isVowel(char c){
    c=tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(){
    printf("%s", isVowel('e')?"Vowel":"Consonant");
    return 0;
}
