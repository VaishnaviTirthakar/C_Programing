/* Q: Write a program to count sentences in a string. */
#include <stdio.h>
int main(){
    char s[300]; gets(s); int c=0;
    for(int i=0;s[i];i++)
        if(s[i]=='.' || s[i]=='?' || s[i]=='!') c++;
    printf("Sentences = %d", c);
}
