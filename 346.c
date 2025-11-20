// Write a program to check palindrome using pointer.
#include <stdio.h>
#include <string.h>
int main(){
    char s[]="madam", *p=s;
    int i=0,j=strlen(s)-1,flag=1;
    while(i<j){
        if(*(p+i)!=*(p+j)){ flag=0; break; }
        i++; j--;
    }
    printf(flag?"Palindrome":"Not Palindrome");
    return 0;
}
