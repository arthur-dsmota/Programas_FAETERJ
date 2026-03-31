//Maior_de_tres.c

#include <stdio.h>

float calcula_maior_de_tres (float a, float b, float c) {
    float maior;
    maior = a;

    if (maior < b) {
        maior = b;
    }
    if (maior < c) {
        maior = c;
    }
    return maior;
}

int main (void) {
    float x, y, z, maior;
    printf("Insira 3 valores: \n");
    scanf("%f %f %f", &x, &y, &z);

    maior = calcula_maior_de_tres(x, y, z);

    printf("O maior valor é %f", maior);

    return 0;
}
