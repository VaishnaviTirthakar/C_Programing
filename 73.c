//Day Name from Number (1–7)
#include <stdio.h>
int main() {
    int d; printf("Enter day number (1-7): "); if(scanf("%d",&d)!=1) return 0;
    switch(d) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }
    return 0;
}
