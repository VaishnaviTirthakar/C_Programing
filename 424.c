// Q: Use union to store map occupancy or cost value.
#include <stdio.h>

union MapCell {
    int occupied;
    float cost;
};

int main() {
    union MapCell cell;

    cell.occupied = 1;
    printf("Occupied = %d\n", cell.occupied);

    cell.cost = 4.5;
    printf("Cost = %.2f\n", cell.cost);

    return 0;
}
