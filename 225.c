/* Q: Write a program to remove duplicate characters. */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], r[100]; gets(s);
    int j=0;
    for(int i=0;s[i];i++){
        if(!strchr(r,s[i])) r[j++]=s[i];
    }
    r[j]='\0';
    printf("%s", r);
}
