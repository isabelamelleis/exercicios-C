#include <stdio.h>

float somaIterativa (int n) {
    float soma = 0.0;
    for(int i = 0 ; i <= n ; i++) {
        float termo = 1.0;
        for(int j = 1 ; j <= i ; j++){
            termo = termo * 1/j;
        }
        soma+=termo;
    }
    return soma;
}

// função auxiliar para fazer o fatorial de forma recursiva da função somaRecursiva
float fatorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

float somaRecursiva (int n) {
    if (n == 0) {
        return 1.0;
    } else {
        return 1.0/fatorial(n) + somaRecursiva(n - 1);
    }
}

int main () {
    int n;
    float S1, S2;
    printf("Digite um numero para definir o numero de termos para somatorio da constante 'e': ");
    scanf("%d", &n);
    
    S1 = somaIterativa(n);
    S2 = somaRecursiva(n);

    printf("\nForma iterativa: \n");
    printf("O valor da constante 'e' a partir do numero de termos digitados eh: %.5f\n", S1);
    printf("\nForma recursiva: \n");
    printf("O valor da constante 'e' a partir do numero de termos digitados eh: %.5f\n", S2);
}