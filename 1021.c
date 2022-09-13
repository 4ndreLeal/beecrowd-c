#include <math.h>
int main() {
    double N;
    scanf("%lf", &N);
    double monetary_value[] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int aux = 0, size = sizeof(monetary_value) / sizeof(monetary_value[0]);
    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++) {
        aux = (int)(N / monetary_value[i]);
        printf("%d nota(s) de R$ %.2lf\n", aux, monetary_value[i]);
        N = fmod(N, monetary_value[i]);
    }
    printf("MOEDAS:\n");
    for(int j = 6; j < size; j++) {
        aux = (int)(N / monetary_value[j]);
        printf("%d moeda(s) de R$ %.2lf\n", aux, monetary_value[j]);
        N = fmod(N, monetary_value[j]) + 0.00001;
    }
    return 0;
}
