//PARTE_C_6
#include <stdio.h>

int main (){
    int dia, hora;
    float valor, desconto;

    printf("Qual o valor do ingresso? R$");
    scanf("%f", &valor);

    printf("Qual o dia da semana? \n1- Segunda\n2- Terça\n3- Quarta\n");
    printf("4- Quinta\n5- Sexta\n6- Sábado\n7- Domingo\n");
    scanf("%d", &dia);

    if (dia == 3) {
        printf("Qual o horário? ");
        scanf("%d", &hora);

        if (hora <= 18) {
            desconto = 40;
        }
        else {
            desconto = 30;
        }
    }
    else {
        desconto = 10;
    }

    printf("Preço do ingresso: R$ %.2f\n", valor - (valor * desconto/100));

    return 0;
}
