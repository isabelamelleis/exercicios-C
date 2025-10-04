#include <stdio.h>

int compara(float a[], float b[], int n) {
    for(int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int n;
    printf("Digite o tamanho que deseja para os vetores: ");
    scanf("%d", &n);

    float a[n], b[n];    
    printf("Digite os valores do vetor 1: \n");
    for(int i = 0; i < n; i++) {
        scanf("%f", &a[i]);    
    }
    printf("Digite os valores do vetor 2: \n");
    for(int i = 0; i < n; i++) {
        scanf("%f", &b[i]);    
    }
    int comparacao = compara(a, b, n);
    if (comparacao) {
        printf("Os vetores sao iguais.");
    } else {
        printf("Os vetores sao diferentes.");
    }
}