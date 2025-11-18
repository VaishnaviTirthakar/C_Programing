/* Q: Write a program to sort characters of string alphabetically. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; gets(s);
    char t;
    for(int i=0;s[i];i++)
        for(int j=i+1;s[j];j++)
            if(s[i]>s[j]){ t=s[i]; s[i]=s[j]; s[j]=t; }
    printf("%s", s);
}
