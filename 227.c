/* Q: Write a program to check if two strings are anagrams. */
#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100];
    int f1[256]={0},f2[256]={0};
    gets(a); gets(b);
    for(int i=0;a[i];i++) f1[(unsigned char)a[i]]++;
    for(int i=0;b[i];i++) f2[(unsigned char)b[i]]++;
    for(int i=0;i<256;i++)
        if(f1[i]!=f2[i]){ printf("Not Anagram"); return 0;}
    printf("Anagram");
}
