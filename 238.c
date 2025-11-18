/* Q: Write a program to find the longest word in a string. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[200], w[50], big[50]="";
    int i=0;
    while(sscanf(s+i,"%s",w)==1){
        if(strlen(w)>strlen(big)) strcpy(big,w);
        i += strlen(w)+1;
    }
    printf("Longest: %s", big);
}
