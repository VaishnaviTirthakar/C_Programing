// Q9: Use continue to skip numbers that are divisible by 3
#include <stdio.h>
int main() {
    for(int i=1;i<=20;i++){
        if(i%3==0) continue;
        printf("%d ", i);
    }
}
