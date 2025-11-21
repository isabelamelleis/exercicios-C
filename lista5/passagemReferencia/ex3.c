#include <stdio.h>

void calcula_circulo(float raio, float *pPerimetro, float *pArea) {
    *pPerimetro = 2*(3.14)*raio;
    *pArea = (3.14)*(raio*raio);
}

int main()
{
    float raio, perimetro, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    calcula_circulo(raio, &perimetro, &area);
    
    printf("Perimetro = %.2f \nArea = %.2f.", perimetro, area);
    
    return 0;
}