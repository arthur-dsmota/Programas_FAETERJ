//Calculadora_quatro_operacoes.c

#include <stdio.h>

float calculaSoma (float a, float b) {
    float total = a + b;
    return total;
}

float calculaSubtracao (float a, float b){
   float diferenca = a - b;
   return diferenca;
}
float calculaMult (float a, float b){
    float produto = a * b;
    return produto;
}
float calculaDiv (float a, float b){
    float quociente = a / b;
    return quociente;
}

int main (void) {
    float x, y;
    float soma, subtracao, multiplicacao, divisao;

    printf("Insira dois valores: \n");
    scanf("%f %f", &x, &y);

    soma = calculaSoma (x, y);
    subtracao = calculaSubtracao (x, y);
    multiplicacao = calculaMult (x, y);
    divisao = calculaDiv (x, y);

    printf("Soma: %.1f + %.1f = %.1f\n", x, y, soma);
    printf("Subtração: %.1f - %.1f = %.1f\n", x, y, subtracao);
    printf("Multiplicação: %.1f * %.1f = %.1f\n", x, y, multiplicacao);
    printf("Divisão: %.1f / %.1f = %.1f\n", x, y, divisao);

    return 0;
}
