//PARTE_B_6

#include <stdio.h>

int main() {

    float valor_compra, valor_frete;

    printf("Qual o valor da compra? R$");
    scanf("%f", &valor_compra);

    if (valor_compra <= 200) {

        valor_frete = 25;
    }
    else {

        valor_frete = 0;
    }

    printf("Valor do frete: R$%.2f\n", valor_frete);

    return 0;
}
