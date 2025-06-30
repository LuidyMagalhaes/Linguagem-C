#include <stdio.h>

int main() {
    float peso;
    float altura;
    float imc;

    printf("Digite seu peso em KG: \n");
    scanf("%f", &peso);

    printf("Agora digite a sua altura em METROS: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Seu IMC eh: %.2f, voce esta abaixo do peso!\n", imc);
    } else if (imc < 24.9) {
        printf("Seu IMC eh: %.2f, seu peso esta normal!\n", imc);
    } else if (imc < 29.9) {
        printf("Seu IMC eh: %.2f, voce esta com sobrepeso!\n", imc);
    } else if (imc < 34.9) {
        printf("Seu IMC eh: %.2f, voce esta com obesidade grau 1!\n", imc);
    } else if (imc < 39.9) {
        printf("Seu IMC eh: %.2f, voce esta com obesidade grau 2!\n", imc);
    } else {
        printf("Seu IMC eh: %.2f, voce esta com obesidade grau 3!\n", imc);
    }

    return 0;
}



