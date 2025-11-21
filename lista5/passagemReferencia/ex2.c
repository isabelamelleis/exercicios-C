#include <stdio.h>

void troca_valor(float *x, float *y) {
    float z;
    z = *y;
    *y = *x;
    *x = z;
}

int main()
{
    float x, y;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);
    printf("\nValor de 'x' = %.2f e valor de 'y' = %.2f.\n\n", x, y);
    troca_valor(&x, &y);
    printf("Trocando...\n\n");
    printf("Valor de 'x' = %.2f e valor de 'y' = %.2f.", x, y);
    
    return 0;
}