// Q26: Find largest number from n inputs
#include <stdio.h>
int main() {
    int n, num, max=-9999;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num);
        if(num > max) max = num;
    }
    printf("Max = %d",max);
}
