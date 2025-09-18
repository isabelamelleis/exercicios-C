#include <stdio.h>

int maiorValor (int a, int b, int c) {
    if (a >= b && a>=c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main () {
    int a, b, c, resultMaiorValor;
    printf("Digite tres valores inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    resultMaiorValor = maiorValor(a, b, c);
    printf("O maior valor eh: %d", resultMaiorValor);

    return 0;
}