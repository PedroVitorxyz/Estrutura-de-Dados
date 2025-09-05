#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    if (idade >= 5 && idade <= 7){
        printf("Sua categoria eh a Infantil A");
    } else if (idade >= 8 && idade <= 10){
        printf("Sua categoria eh a Infantil B");
    } else if (idade >= 11 && idade <= 13){
        printf("Sua categoria eh a Juvenil A");
    } else if (idade >= 14 && idade <= 17){
        printf("Sua categoria eh a Juvenil B");
    } else if (idade >= 18){
        printf("Sua categoria eh a Senior");
    } else {
        printf("Voce nao pertence a nenhuma categoria");
    }

    return 0;
}