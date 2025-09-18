#include <stdio.h>

int somaImpares (int x, int y) {
    int somaImpares = 0, trocaNum;
    if (x == y) {
        return 0;
    } else {
        if (x > y) {
            trocaNum = x;
            x = y;
            y = trocaNum;
        }
        for (int i = x+1; i < y; i++) {
            if (i % 2 != 0) {
                somaImpares = somaImpares + i;
            }
        }
        return somaImpares;
    }
}

int main () {
    int x, y, resultSomaImpares;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    resultSomaImpares = somaImpares(x, y);
    printf("A soma de todos os impares entre %d e %d eh: %d", x, y, resultSomaImpares);

    return 0;
}