//A: 6

#include <stdio.h>

int main () {

    float peso, volume, frete_inicial, frete_final;

    printf("Qual o valor inicial do frete? R$");
    scanf("%f", &frete_inicial);
    printf("Qual o peso do frete? (kg)");
    scanf("%f", &peso);
    printf("Qual o volume do frete? (m³)");
    scanf("%f", &volume);

    frete_final = frete_inicial;

    if (peso > 20) {
        frete_final = frete_final + 12;
    }
    if (volume > 1) {
        frete_final = frete_final + 8;
    }

    printf("O valor final do frete é de R$%.2f \n", frete_final);

    return 0;
}
