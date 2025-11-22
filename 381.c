// Program to store bank account details.
#include <stdio.h>
struct Bank{ int acc; char name[20]; float bal; };
int main(){
    struct Bank b={123,"Amit",5000};
    printf("%d %s %.2f",b.acc,b.name,b.bal);
}
