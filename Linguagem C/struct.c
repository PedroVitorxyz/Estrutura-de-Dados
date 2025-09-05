#include <stdio.h>
#include <stdlib.h>

/*
►Permitem colocar, em uma única entidade, elementos de tipos diferentes;
►É um conjunto de uma ou mais variáveis agrupadas sob um único nome, de forma
a facilitar a sua referência;
►Podem conter elementos com qualquer tipo de dados válidos em C;
*/

struct aluno{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
};

typedef struct aluno Aluno;

int main(){
    Aluno pedro = {251027405, "Pedro Vitor", 8.5, 7.0, 9.5};

    printf("Matricula: %d\nNome: %s\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", pedro.matricula, pedro.nome, pedro.nota1, pedro.nota2, pedro.nota3);

    return 0;
}