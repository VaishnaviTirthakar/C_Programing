//Grade Letter from Marks (single subject)
#include <stdio.h>
int main() {
    int m; printf("Enter mark (0-100): "); if(scanf("%d",&m)!=1) return 0;
    if(m<0 || m>100) printf("Invalid\n");
    else if(m>=90) printf("A+\n");
    else if(m>=80) printf("A\n");
    else if(m>=70) printf("B\n");
    else if(m>=60) printf("C\n");
    else if(m>=50) printf("D\n");
    else printf("F\n");
    return 0;
}
