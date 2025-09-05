#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *p = NULL; // Boa prática: inicializar ponteiros com NULL

    // 1. Alocação inicial com malloc
    p = (int*) malloc(5 * sizeof(int));
    if (p == NULL) {
        printf("Falha na alocacao inicial!\n");
        return 1;
    }

    // 2. Preenchendo e mostrando o vetor original
    printf("Vetor original (tamanho 5):\n");
    for (i = 0; i < 5; i++) {
        p[i] = i + 1; // Preenche com 1, 2, 3, 4, 5
        printf("p[%d] = %d\n", i, p[i]);
    }
    printf("\n");

    // 3. Diminuindo o tamanho do vetor para 3 (forma segura)
    printf("--- Diminuindo para tamanho 3 ---\n");
    
    // Usamos um ponteiro temporário para não perder a referência original em caso de falha
    int *temp = realloc(p, 3 * sizeof(int));
    
    if (temp == NULL) {
        printf("Falha ao diminuir a memoria! O ponteiro original ainda e valido.\n");
        // Como a realocação falhou, p ainda é válido e precisa ser liberado
        free(p);
        return 1;
    }
    // Apenas se a realocação for bem-sucedida, atualizamos o ponteiro original
    p = temp;

    printf("Vetor apos diminuir:\n");
    for (i = 0; i < 3; i++) {
        printf("p[%d] = %d\n", i, p[i]); // Imprime 1, 2, 3
    }
    printf("\n");

    // 4. Aumentando o tamanho do vetor para 10 (forma segura)
    printf("--- Aumentando para tamanho 10 ---\n");
    temp = realloc(p, 10 * sizeof(int));
    
    if (temp == NULL) {
        printf("Falha ao aumentar a memoria! O ponteiro original ainda e valido.\n");
        free(p);
        return 1;
    }
    p = temp;

    printf("Vetor apos aumentar:\n");
    for (i = 0; i < 10; i++) {
        if (i < 3) {
            // Os 3 primeiros valores foram preservados
            printf("p[%d] = %d (valor preservado)\n", i, p[i]);
        } else {
            // O espaço novo (posições 3 a 9) contém lixo de memória
            printf("p[%d] = %d (lixo de memoria)\n", i, p[i]);
        }
    }
    printf("\n");

    // 5. ETAPA FINAL E ESSENCIAL: Liberar a memória
    printf("Liberando memoria final...\n");
    free(p);

    return 0;
}