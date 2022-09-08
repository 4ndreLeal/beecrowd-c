#include <stdio.h>
void average_consumption (int km, float l) {
    printf("%.3f km/l\n", km / l);
}     
int main() {
    int total_distance;
    float spent_fuel;
    scanf("%d", &total_distance);
    scanf("%f", &spent_fuel);
    average_consumption (total_distance, spent_fuel);
    return 0;
}
