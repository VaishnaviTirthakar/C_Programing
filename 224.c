/* Q: Write a program to find first non-repeating character. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; gets(s); int f;
    for(int i=0;s[i];i++){
        f=1;
        for(int j=0;s[j];j++)
            if(i!=j && s[i]==s[j]){ f=0; break; }
        if(f){ printf("First non-repeating: %c", s[i]); return 0; }
    }
    printf("None");
}
