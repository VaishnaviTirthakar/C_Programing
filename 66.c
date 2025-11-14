//Leap Year
#include <stdio.h>
int main() {
    int y; printf("Enter year: "); if(scanf("%d",&y)!=1) return 0;
    if((y%400)==0 || ((y%4)==0 && (y%100)!=0)) printf("%d is Leap year\n", y);
    else printf("%d is Not a leap year\n", y);
    return 0;
}
