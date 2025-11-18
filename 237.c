/* Q: Write a program to reverse every word in a string. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[200], w[50]; gets(s);
    int i=0;
    while(sscanf(s+i,"%s",w)==1){
        strrev(w);
        printf("%s ", w);
        i += strlen(w) + 1;
    }
}
