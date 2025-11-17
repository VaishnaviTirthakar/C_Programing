// Q. Count how many times a number appears
#include <stdio.h>
int main() {
    int a[6]={2,3,2,4,2,5}, key=2, c=0;
    for(int i=0;i<6;i++)
        if(a[i]==key) c++;
    printf("Count = %d", c);
    return 0;
}
