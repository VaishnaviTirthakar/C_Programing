// Q10: Use goto to create a simple menu that repeats
#include <stdio.h>
int main(){
    int choice;
    menu:
    printf("\n1. Hello\n2. Exit\nEnter choice: ");
    scanf("%d",&choice);

    if(choice==1){
        printf("Hello User!\n");
        goto menu;
    }
    else if(choice==2){
        printf("Exiting...");
    }
    else{
        printf("Invalid choice!\n");
        goto menu;
    }
}
