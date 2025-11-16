// Q17: Print prime numbers from 1 to 50
#include <stdio.h>
int main() {
    for(int n=2;n<=50;n++){
        int flag=0;
        for(int i=2;i<n;i++)
            if(n%i==0) flag=1;
        if(flag==0) printf("%d ",n);
    }
}
