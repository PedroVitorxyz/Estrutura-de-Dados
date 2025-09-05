#include <stdio.h>
#include <stdlib.h>

int main() {
    // A função malloc serve para alocar memória durante a execução do programa
    // É ela que faz o pedido de memória ao computador e retorna um ponteiro com o endereço do início do espaço de memória alocado
    // Normalmente retorna a primeiro posição do array

    int *p;
    int i;

    // 1. Alocar memória
    p = (int *) malloc(5*sizeof(int)); // Está atribuindo a p o endereço retornado pelo malloc que equivale a 5 x 4 bytes (tamanho de memória utilizado por um int)

    // É uma boa prática verificar se a alocação deu certo
    if (p == NULL){
        printf("Erro: falha ao alocar memoria!\n");
        return 1;
    }

    // 2. Usar a memória alocada
    for (i=0; i<5; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &p[i]);
    }

    // Mostrar os valores lidos para confirmar
    printf("\nValores digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    // 3. Liberar a memória quando não for mais necessária
    free(p);

    return 0;
}