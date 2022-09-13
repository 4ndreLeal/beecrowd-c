#include <stdio.h>
int main() {
    int N, hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;
    scanf("%d", &N);
    int rest = N;
    while (rest - 100 >= 0) {
        hundred++;
        rest -= 100;
    }while (rest - 50 >= 0) {
        fifty++;
        rest -= 50;
    }while (rest - 20 >= 0) {
        twenty++;
        rest -= 20;
    }while (rest - 10 >= 0) {
        ten++;
        rest -= 10;
    }while (rest - 5 >= 0) {
        five++;
        rest -= 5;
    }while (rest - 2 >= 0) {
        two++;
        rest -= 2;
    }
    one = rest;
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", hundred);
    printf("%d nota(s) de R$ 50,00\n", fifty);
    printf("%d nota(s) de R$ 20,00\n", twenty);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", five);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);
    return 0;
}
