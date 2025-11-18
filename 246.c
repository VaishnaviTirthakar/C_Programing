/* Q: Write a program to compare strings without strcmp(). */
#include <stdio.h>
int main(){
    char a[100], b[100]; gets(a); gets(b);
    for(int i=0;a[i]||b[i];i++){
        if(a[i]!=b[i]){ printf("Not Equal"); return 0; }
    }
    printf("Equal");
}
