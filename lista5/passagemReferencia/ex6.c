#include <stdio.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice) {
    int i;
    *pMax = vet[0];
    *pIndice = 0;
    for(i = 1; i < tam; i++) {
        if(vet[i] > *pMax) {
            *pMax = vet[i];
            *pIndice = i;
        }
    }
}

int main()
{
    int tam = 5, i, indice;
    float v[tam], valorMax;
    for(i = 0; i < tam; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%f", &v[i]);
    }
    max_vetor(v, tam, &valorMax, &indice);
    
    printf("\nMaior numero = %.2f \nIndice: %d", valorMax, indice);
    
    return 0;
}