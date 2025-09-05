#include <stdio.h>

int main(){
    int a = 10, b = 3;
    int soma = a + b; //adição
    int subtracao = a - b; //subtração
    int multiplicacao = a * b; //multiplicação
    int divisao = a / b; //divisão
    int modulo = a %b; //resto da divisão
    int incremento = a++; //incremento +1

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);
    printf("Modulo: %d\n", modulo);
    printf("Incremento de a: %d\n", incremento);

    return 0;
}