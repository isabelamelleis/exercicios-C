#include <stdio.h>

int somaIterativa (int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma+=i;
    }
    return soma;
}

int somaRecursiva (int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somaRecursiva(n - 1);
    }
}

int main () {
    int n, S1, S2;
    printf("Digite um numero: ");
    scanf("%d", &n);

    S1 = somaIterativa(n);
    S2 = somaRecursiva(n);

    printf("\nForma iterativa: \n");
    printf("A soma do numero 1 ate o numero digitado (%d) eh: %d\n", n, S1);
    printf("\nForma recursiva: \n");
    printf("A soma do numero 1 ate o numero digitado (%d) eh: %d\n", n, S2);
}