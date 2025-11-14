//Check if Sum of Two Equals Third
#include <stdio.h>
int main() {
    int a,b,c; printf("Enter three ints: "); if(scanf("%d %d %d",&a,&b,&c)!=3) return 0;
    if(a + b == c || a + c == b || b + c == a) printf("One equals sum of other two\n");
    else printf("No equality\n");
    return 0;
}
