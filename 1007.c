#include <stdio.h>
int main() {
    int numbers[4];
    for (int i = 0; i < sizeof(numbers); i++) {
        scanf("%d", &numbers[i]);
        
    }
    int A = numbers[0], B = numbers[1], C = numbers[2], D = numbers[3]; 
    int difference = A * B - C * D;
    printf("DIFERENCA = %d\n", difference);
    return 0;
}
