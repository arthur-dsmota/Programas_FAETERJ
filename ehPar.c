#include <stdio.h>

int is_even (int x) {
    if (x % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main (void) {
    int x, valor;
    printf("Teste se é par: ");
    scanf("%i", &x);
    valor = is_even(x);

    if (valor == 1) {
        printf("O número é par.\n");
    }
    else {
        printf("O número é ímpar.\n");
    }
    return 0;
}
