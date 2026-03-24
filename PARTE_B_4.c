//PARTE_B_4

#include <stdio.h>

int main() {

    float total, valor_final;

    printf("Qual o valor total das compras? R$");
    scanf("%f", &total);

    if (total >= 150) {

        valor_final = total * 0.90;
    }
    else {

        valor_final = total * 0.97;
    }

    printf("Valor final das compras após desconto: R$%.2f\n", valor_final);

    return 0;
}
