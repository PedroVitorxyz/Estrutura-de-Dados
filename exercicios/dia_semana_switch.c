#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%d", dia);

    switch(dia) {
        case 1: printf("O dia da semana que corresponde a 1 eh Domingo!"); break;
        case 2: printf("O dia da semana que corresponde a 2 eh Segunda!"); break;
        case 3: printf("O dia da semana que corresponde a 3 eh Terca!"); break;
        case 4: printf("O dia da semana que corresponde a 4 eh Quarta!"); break;
        case 5: printf("O dia da semana que corresponde a 5 eh Quinta!"); break;
        case 6: printf("O dia da semana que corresponde a 6 eh Sexta!"); break;
        case 7: printf("O dia da semana que corresponde a 7 eh Sabado!"); break;
        default: printf("O numero em questao nao corresponde a nenhum dia da semana"); break;
    }

    return 0;
}