#include <stdio.h>

void max_min(int vet[], int tam, int *pMin, int *pMax) {
    int i, maior = vet[0], menor = vet[0];
    *pMax = vet[0];
    *pMin = vet[0];
   
for(i = 1; i < tam; i++) {
        if(vet[i] > *pMax) {
            *pMax = vet[i];
        }
        if(vet[i] < *pMin) {
            *pMin = vet[i];
        }
    }
}

int main()
{
    int tam = 5;
    int v[tam], valorMax, valorMin, i;
    for(i = 0; i < tam; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    max_min(v, tam, &valorMin, &valorMax);
    
    printf("\nMaior numero = %d \nMenor numero = %d", valorMax, valorMin);
    
    return 0;
}