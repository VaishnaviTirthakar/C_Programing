//Smallest of Three Number
#include <stdio.h>
int main() {
    int a,b,c; printf("Enter three ints: "); if(scanf("%d %d %d",&a,&b,&c)!=3) return 0;
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    printf("Smallest = %d\n", min);
    return 0;
}
