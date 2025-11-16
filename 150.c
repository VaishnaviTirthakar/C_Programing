// Q: Print numbers from 1 to 10 but stop the loop when number becomes 5
#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            break;   // jumping statement
        }
        printf("%d ", i);
    }
    return 0;
}
