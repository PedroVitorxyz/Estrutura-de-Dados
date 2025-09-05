#include <stdio.h>

//constantes são valores que não podem ser alterados durante a execução do programa
//podem ser declarados de duas formas em C:

const float PI = 3.14159; //usando a palavra reservada const
#define PI = 3.14159 //usando a diretiva de pré-processamento #define

//#define é mais utilizado para definir constantes em C, pois não consome memória
//e pode ser usado para definir macros  (como funções simples)
//const é mais seguro, pois o compilador pode verificar o tipo da constante e evitar erros de tipo 
//mas consome memória, pois é uma variável que não pode ser alterada
//#define so permite nome maisculo por convenção