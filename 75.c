//Days in Month (consider leap year for Feb)
#include <stdio.h>
int main() {
    int m,y; printf("Enter month(1-12) and year: "); if(scanf("%d %d",&m,&y)!=2) return 0;
    switch(m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31 days\n"); break;
        case 4: case 6: case 9: case 11: printf("30 days\n"); break;
        case 2:
            if((y%400)==0 || ((y%4)==0 && (y%100)!=0)) printf("29 days\n"); else printf("28 days\n");
            break;
        default: printf("Invalid month\n");
    }
    return 0;
}
