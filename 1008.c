#include <stdio.h>
int main() {
    int number;
    float hours, salary_per_hour, salary;
    scanf("%d", &number);
    scanf("%f", &hours);
    scanf("%f", &salary_per_hour);
    salary = hours * salary_per_hour;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
     return 0;
}
