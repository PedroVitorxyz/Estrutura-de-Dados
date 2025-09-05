#include <stdio.h>

int maior(int a, int b) {
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    if (x == y){
        printf("%d e %d sao iguais", x, y);
    } else {
        int resultado = maior(x, y);
        printf("O maior numero entre %d e %d eh: %d\n", x, y, resultado);
    }

    return 0;
}