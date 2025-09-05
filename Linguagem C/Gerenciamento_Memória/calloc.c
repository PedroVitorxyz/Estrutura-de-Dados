#include <stdio.h>
#include <stdlib.h> 

int main() {
    int i; // Variável para usar nos laços 'for'

    // --- Exemplo 1: Alocação com malloc ---
    int *p;
    printf("--- Alocando memoria com malloc ---\n");
    p = (int *) malloc(50 * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (p == NULL) {
        printf("Erro: Memoria Insuficiente!\n");
        return 1; // Encerra o programa com erro
    }

    // Imprimi os 5 primeiros valores para ver o "lixo de memória"
    printf("Conteudo da memoria alocada por malloc (pode variar a cada execucao):\n");
    for (i = 0; i < 5; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    printf("\n");

    // --- Exemplo 2: Alocação com calloc ---
    int *p1;
    printf("--- Alocando memoria com calloc ---\n");
    p1 = (int *) calloc(50, sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (p1 == NULL) {
        printf("Erro: Memoria Insuficiente!\n");
        free(p); // Libera a primeira alocação antes de sair
        return 1; // Encerra o programa com erro
    }

    // Imprimir os 5 primeiros valores para ver que foram zerados
    printf("Conteudo da memoria alocada por calloc:\n");
    for (i = 0; i < 5; i++) {
        printf("p1[%d] = %d\n", i, p1[i]);
    }
    printf("\n");


    // --- ETAPA CRUCIAL: Liberar a memória ---
    // Toda memória alocada com malloc ou calloc DEVE ser liberada com free()
    // para ser devolvida ao sistema operacional.
    printf("Liberando a memoria alocada...\n");
    free(p);
    free(p1);

    // system("pause"); // Pode ser usado no Windows para não fechar a janela
    return 0;
}