//Do Three Angles Form a Triangle? (sum==180)
#include <stdio.h>
int main() {
    int x,y,z; printf("Enter three angles: "); if(scanf("%d %d %d",&x,&y,&z)!=3) return 0;
    if(x>0 && y>0 && z>0 && x+y+z==180) printf("Form a triangle\n"); else printf("Do not form triangle\n");
    return 0;
}
