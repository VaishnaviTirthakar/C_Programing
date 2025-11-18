/* Q: Write a program to convert a string to title case. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200]; gets(s);
    int flag=1;
    for(int i=0;s[i];i++){
        if(flag && isalpha(s[i])){ s[i]=toupper(s[i]); flag=0; }
        else if(!isalpha(s[i])) flag=1;
        else s[i]=tolower(s[i]);
    }
    printf("%s", s);
}
