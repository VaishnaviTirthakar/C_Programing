// Q: Use union to store lidar distance or number of points detected.
#include <stdio.h>

union Lidar {
    float distance;
    int points;
};

int main() {
    union Lidar l;

    l.distance = 12.8;
    printf("Distance = %.2f m\n", l.distance);

    l.points = 350;
    printf("Points = %d\n", l.points);

    return 0;
}
