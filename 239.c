/* Q: Write a program to find the smallest word in a string. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[200], w[50], small[50]=""; int first=1;
    gets(s);
    int i=0;
    while(sscanf(s+i,"%s",w)==1){
        if(first || strlen(w)<strlen(small)){
            strcpy(small,w); first=0;
        }
        i+=strlen(w)+1;
    }
    printf("Smallest: %s", small);
}
