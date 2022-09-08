#include <stdio.h>
void necessary_time (int km) {
    printf ("%d minutos\n", km * 2);
}
int main () {
    int distance;
    scanf ("%d", &distance);
    necessary_time (distance);
    return 0;
}
