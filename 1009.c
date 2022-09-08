#include <stdio.h>
int main() {
    char name;
    double salary, value_sold, salary_with_bonus;
    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &value_sold);
    salary_with_bonus = salary + 0.15 * value_sold;
    printf("TOTAL = R$ %.2f\n", salary_with_bonus);
    return 0;
}
