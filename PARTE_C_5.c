//PARTE_C_5

#include <stdio.h>

int main() {

    int idade, sinistro;
    float franquia;

    printf("Qual a idade? ");
    scanf("%i", &idade);

    if (idade < 25) {
        printf("Houve sinistro? 1-Sim 2-Não ");
        scanf("%i", &sinistro);
        franquia = 3000;

        if (sinistro == 2) {
            franquia = franquia - 500;
        }
    }
    else {
        franquia = 2000;
    }
    printf("Valor do seguro: R$%.2f\n", franquia);

    return 0;
}
