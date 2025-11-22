// Program for employee salary calculate in structure.
#include <stdio.h>
struct Emp { float basic, hra, da; };
int main(){
    struct Emp e={10000, 2000, 3000};
    printf("%.2f", e.basic+e.hra+e.da);
}
