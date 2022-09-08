#include <stdio.h>
#include <math.h>
#define PI 3.14159
void sphere_volume (double R) {
    printf("VOLUME = %.3lf\n", (4.0 / 3) * PI * pow(R, 3));
}
int main() {
    double radius;
    scanf("%lf", &radius);
    sphere_volume(radius);
    return 0;
}
