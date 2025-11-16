// Q25: Find power of a number using loop
#include <stdio.h>
int main() {
    int a,b,p=1;
    scanf("%d %d", &a,&b);
    for(int i=1;i<=b;i++)
        p*=a;
    printf("%d",p);
}
