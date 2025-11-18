/* Q: Write a program to find the first repeating character in a string. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100]; gets(s);
    for(int i=0;s[i];i++)
        for(int j=i+1;s[j];j++)
            if(s[i]==s[j]){ printf("First repeating: %c", s[i]); return 0; }
    printf("No repeating character");
}
