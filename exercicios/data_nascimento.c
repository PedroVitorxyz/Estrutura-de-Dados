#include <stdio.h>

int main() {
    int dia, mes, ano;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("%s nasceu no dia %02d/%02d/%d\n", nome, dia, mes, ano);

    return 0;
}