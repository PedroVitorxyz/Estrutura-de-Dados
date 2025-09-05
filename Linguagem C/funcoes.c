#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) { //As funções em C são declaradas com o tipo de dado que retornam, o nome da função e os parâmetros entre parênteses e devem ser declaradas antes do main
    // Se a função não retornar nada, o tipo de dado deve ser "void"
    // recebe dois inteiros como parâmetros e retorna a soma deles
    return (a + b);
}

int main() {
    int a, b;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    int resultado_soma = soma(a, b); // chama a função soma e armazena o resultado na variável soma
    printf("A soma de %d e %d eh %d\n", a, b, resultado_soma);

    return 0;
}