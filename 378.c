// Program to store and print cricket player details.
#include <stdio.h>
struct Player{ char name[20]; int runs; };
int main(){
    struct Player p={"Virat",120};
    printf("%s %d", p.name,p.runs);
}
