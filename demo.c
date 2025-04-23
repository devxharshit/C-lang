#include <stdio.h>
#include <math.h>

int main() {
    double angle = 45.0;
    double radians = angle * (M_PI / 180.0); // Convert degrees to radians

    printf("sin(%.2f) = %.2f\n", angle, sin(radians));
    printf("cos(%.2f) = %.2f\n", angle, cos(radians));
    printf("tan(%.2f) = %.2f\n", angle, tan(radians));

    return 0;
}
