#include <stdio.h>
int main() {
    int code1, code2, units_product1, units_product2;
    float price_product1, price_product2, value_to_pay;
    scanf("%d %d %f", &code1, &units_product1, &price_product1);
    scanf("%d %d %f", &code2, &units_product2, &price_product2);
    value_to_pay = units_product1 * price_product1 + units_product2 * price_product2;
    printf("VALOR A PAGAR: R$ %.2f\n", value_to_pay);
    return 0;
}
