#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    for (c = a; c <= b; c++) { //(início do loop; condição de parada; o que fazer a cada iteração)
        printf("%d\n", c);
    }

    return 0;
}