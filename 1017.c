#include <stdio.h>
int main() {
    int spent_time, average_speed;
    float fuel, velocity, distance;
    scanf("%d", &spent_time);
    scanf("%d", &average_speed);
    distance = spent_time * average_speed;
    fuel = distance / 12;
    printf("%.3f\n", fuel);
    return 0;
}
