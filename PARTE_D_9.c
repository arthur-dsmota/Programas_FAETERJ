#include <stdio.h>

int main()
{
    int salario, avaliacao, faltas;

    printf("Qual o número de salários?");
    scanf("%d", &salario);

    if (salario <= 3)
    {
        printf("Qual a avaliação? ");
        scanf("%d", &avaliacao);

        if (avaliacao > 8)
        {
            printf("Qual o número de faltas?");
            scanf("%d", &faltas);

            if (faltas == 0)
            {
                printf("Aumento de 12%%");
            }
            else
            {
                printf("Aumento de 10%%");
            }
        }
        else if (avaliacao >= 6)
        {
            printf("Aumento de 8%%");
        }
        else
        {
            printf("Aumento de 2%%");
        }
    }
    else
    {
        printf("Aumento de 2%%");
    }

    return 0;
}
