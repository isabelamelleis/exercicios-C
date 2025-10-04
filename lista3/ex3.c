#include <stdio.h>

int ehPrimo (int k) {
    if (k == 1) {
        return 0;
    }
    for (int i = 2; i < k; i++) {
        if (k % i == 0) {
            return 0;
        }
    }
    return 1;
}

int soma_primos(int v[], int n) {
    int soma = 0;
    for(int i = 0; i < n; i++) {
        if (ehPrimo(v[i])) {
            soma+=v[i];
        }
    }
    return soma;
}

int main() {
    int n, soma = 0;
    printf("Digite o tamanho que deseja para o vetor: ");
    scanf("%d", &n);
    int v[n];
    printf("Digite os valores do vetor: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);    
    }
    soma = soma_primos(v, n);
    printf("A soma de todos os numeros primos no vetor eh de: %d", soma);
}