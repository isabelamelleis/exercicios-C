#include <stdio.h>

int ehPrimo (int k) {
    for (int i = 2; i < k; i++) {
        if (k % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int k, n, contador = 0;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &k);
    scanf("%d", &n);
    printf("Os %d numeros primos que vem logo apos o numero %d sao: \n", n, k);
    for (int i = k+1; contador < n; i++) {
        if (ehPrimo(i)) {
            printf("%d \n", i);
            contador++;
        }
    }

    return 0;
}