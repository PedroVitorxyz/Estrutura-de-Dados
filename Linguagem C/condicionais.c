#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //estrutura if else
    if (num == 5){
        printf("O numero eh 5\n");
    } else {
        printf("O numero nao eh 5\n");  
    }

    //estrutura if else if else
    if (num > 5){
        printf("O numero eh maior que 5\n");
    } else if (num < 5){
        printf("O numero eh menor que 5\n");
    } else {
        printf("O numero eh igual a 5\n");
    }

    //switch case
    switch(num) {
        case 1: printf("O numero eh 1!\n"); break;
        case 2: printf("O numero eh 2!\n"); break;
        case 3: printf("O numero eh 3!\n"); break;
        case 4: printf("O numero eh 4!\n"); break;
        case 5: printf("O numero eh 5!\n"); break;
        default: printf("O numero nao esta entre 1 e 5!\n"); break;
    }
}
