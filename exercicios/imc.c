#include <stdio.h>

float calculo_imc(float peso, float altura) {
    float imc = peso / (altura * altura);
    return imc;
}

int main() {
    float peso, altura;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    float resultado = calculo_imc(peso, altura);
    printf("O seu IMC é %.2f\n", resultado);

    return 0;
}