//Calculadora_azulejos.c

#include <stdio.h>
#include <math.h>

float calcula_area (float larg, float alt) {
    float area;
    area = larg * alt;
    return area;
}

int calcula_qntd_azulejos (float areaLiquida) {
    float qntd = areaLiquida / 0.36;

    return ceil(qntd);
}

int main (void) {
    float larg, alt, larg_porta, alt_porta, larg_janela, alt_janela, area_vao;
    int resp, num_portas, num_janelas;
    area_vao = 0;

    printf("Qual a largura e altura totais das paredes? \n");
    scanf("%f %f", &larg, &alt);

    printf("A parede possui algum vão para ser descontado (porta, janela, etc)? \n1-Sim \n2-Não ");
    scanf("%i", &resp);
    if (resp == 1) {
        printf("Quantas portas? \n");
        scanf("%i", &num_portas);
        printf("Qual a medida de uma porta? (larg x alt) \n");
        scanf("%f %f", &larg_porta, &alt_porta);
        printf("Quantas janelas? \n");
        scanf("%i", &num_janelas);
        printf("Qual a medida de uma janela? (larg x alt) \n");
        scanf("%f %f", &larg_janela, &alt_janela);

        float area_portas = calcula_area(larg_porta, alt_porta) * num_portas;
        float area_janelas = calcula_area(larg_janela, alt_janela) * num_janelas;
        area_vao = area_portas + area_janelas;
    }

    float area_da_parede = calcula_area (larg, alt);
    float areaLiquida = area_da_parede - area_vao;

    printf("Área líquida %.2f m²\n", areaLiquida);

    int num_azulejos = calcula_qntd_azulejos (areaLiquida);

    printf("Quantidade de azulejos necessária: %i", num_azulejos);

    return 0;
}
