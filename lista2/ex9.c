#include <stdio.h>

float somaIterativa (int n) {
    float soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma+=(1.0/i);
    }
    return soma;
}

float somaRecursiva (int n) {
    if (n == 1) {
        return 1.0;
    } else {
        return 1.0/n + somaRecursiva(n - 1);
    }
}

int main () {
    int n;
    float S1, S2;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    S1 = somaIterativa(n);
    S2 = somaRecursiva(n);

    printf("\nForma iterativa: \n");
    printf("A somatoria dos termos eh de: %.5f\n", S1);
    printf("\nForma recursiva: \n");
    printf("A somatoria dos termos eh de: %.5f\n", S2);
}