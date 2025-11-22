// Program to find lowest salary using structure.
#include <stdio.h>
struct E{ float sal; };
int main(){
    struct E e[3]={{2000},{1500},{3000}}, min=e[0];
    for(int i=1;i<3;i++) if(e[i].sal<min.sal) min=e[i];
    printf("%.2f",min.sal);
}
