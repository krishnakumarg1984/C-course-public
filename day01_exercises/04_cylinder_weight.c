#include <stdio.h>

int main(void) {
    const double pi     = 3.14159265359;
    const double radius = 0.355;  // (m)
    const double height = 1.25;   // (m)

    const double volume = pi * radius * radius * height;  // (m^3)

    const double rho  = 1.25;          // density (kg/m^3)
    const double mass = volume * rho;  // (kg)

    const double g      = 9.81;      // (m/s^2)
    const double weight = mass * g;  // (N)

    printf("weight of cylinder is %.2f kg\n", weight);

    return 0;
}
