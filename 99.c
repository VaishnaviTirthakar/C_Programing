//Check if Two Numbers Are Equal, Greater or Smaller
#include <stdio.h>
int main() {
    int a,b; printf("Enter two ints: "); if(scanf("%d %d",&a,&b)!=2) return 0;
    if(a==b) printf("Equal\n"); else if(a>b) printf("First greater\n"); else printf("Second greater\n");
    return 0;
}
