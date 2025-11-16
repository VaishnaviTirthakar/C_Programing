// Q24: Find LCM of two numbers using loop
#include <stdio.h>
int main() {
    int a,b,lcm;
    scanf("%d %d",&a,&b);
    for(lcm=1; ; lcm++)
        if(lcm%a==0 && lcm%b==0) break;
    printf("LCM=%d",lcm);
}
