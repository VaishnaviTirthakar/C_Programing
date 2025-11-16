// Q4: Use continue to print only even numbers from 1 to 20
#include <stdio.h>
int main() {
    for(int i=1; i<=20; i++){
        if(i%2!=0) continue;
        printf("%d ", i);
    }
}
