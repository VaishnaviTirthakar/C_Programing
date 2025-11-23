// Q: Use union to store robot latitude or longitude.
#include <stdio.h>

union GPS {
    float lat;
    float lon;
};

int main() {
    union GPS g;

    g.lat = 19.076;
    printf("Latitude = %.3f\n", g.lat);

    g.lon = 72.877;
    printf("Longitude = %.3f\n", g.lon);

    return 0;
}
