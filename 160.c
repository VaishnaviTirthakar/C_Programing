// Q. Search an element in array (linear search)
#include <stdio.h>
int main() {
    int a[5]={3,5,7,9,11}, key=7, found=0;
    for(int i=0;i<5;i++)
        if(a[i]==key) found=1;
    if(found) printf("Found");
    else printf("Not Found");
    return 0;
}
