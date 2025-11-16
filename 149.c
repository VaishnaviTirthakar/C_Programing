// Q15: Use continue to skip 5 and break when number reaches 8
#include <stdio.h>
int main() {
    for(int i=1; i<=10; i++){
        if(i==5) continue;
        if(i==8) break;
        printf("%d ", i);
    }
}
