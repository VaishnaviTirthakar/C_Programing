//Simple Calculator (switch)
#include <stdio.h>
int main() {
    double x,y; char op;
    printf("Enter: x op y (e.g. 2 + 3): "); if(scanf("%lf %c %lf",&x,&op,&y)!=3) return 0;
    switch(op) {
        case '+': printf("= %g\n", x+y); break;
        case '-': printf("= %g\n", x-y); break;
        case '*': printf("= %g\n", x*y); break;
        case '/': if(y!=0) printf("= %g\n", x/y); else printf("Division by zero\n"); break;
        default: printf("Unknown operator\n");
    }
    return 0;
}
