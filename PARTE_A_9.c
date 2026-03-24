//PARTE_A_9
#include <stdio.h>

int main () {

    float nota, presenca, nota_final;

    printf("Qual a nota do aluno? ");
    scanf("%f", &nota);
    printf("Qual a porcentagem de presença? ");
    scanf("%f", &presenca);

    nota_final = nota;

    if (presenca > 90) {

        nota_final = nota_final + 0.5;

    }
    if (nota_final > 10) {
        nota_final = 10;
    }
    printf("NOTA FINAL: %.1f", nota_final);

    return 0;
}
