/* Q: Write a program to print frequency of each character. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], v[256]={0};
    gets(s);
    for(int i=0;s[i];i++) v[(unsigned char)s[i]]++;
    for(int i=0;i<256;i++)
        if(v[i]) printf("%c = %d\n", i, v[i]);
}
