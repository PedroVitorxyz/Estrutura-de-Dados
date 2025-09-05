#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    while (a <= b) {
        printf("%d\n", a);
        a++;
    }

    return 0;
}