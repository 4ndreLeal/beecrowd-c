#include <stdio.h>
#include <math.h>
void distance (double abscissa1, double ordinate1, double abscissa2, double ordinate2) {
    printf("%.4lf\n", sqrt(pow((abscissa2 - abscissa1), 2) + pow((ordinate2 - ordinate1), 2)));
}
int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    distance (x1, y1, x2, y2);
    return 0;
}
