#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero inteiro e descubra seus divisores: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0){
            printf("%d eh divisor de %d\n", i, n);
        }
    }

    return 0;
}