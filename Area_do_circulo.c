//Area_do_circulo.c

#include <stdio.h>

float calcula_area_circulo (float r) {
    float pi, area;
    pi = 3.1416;
    area = (r * r) * pi;
    return area;
}

int main (void) {
    float r, area_circulo;
    printf("Valor do raio: ");
    scanf("%f", &r);
    area_circulo = calcula_area_circulo(r);

    printf("Área do círculo = %.2f\n", area_circulo);

    return 0;
}
