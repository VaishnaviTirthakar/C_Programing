/* Write a function to check leap year */
#include <stdio.h>

int isLeap(int y){
    return (y%400==0)||(y%4==0&&y%100!=0);
}

int main(){
    printf("%s", isLeap(2024)?"Leap":"Not");
    return 0;
}
