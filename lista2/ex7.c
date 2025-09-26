#include <stdio.h>

int soma_especial(int n, int k, int x) {
    int soma = 0, limite = 0;
    x++;
    for(int i = 0; limite < n; i++) {
        if (x % k == 0) {
            soma+=x;
            limite++;
        }
        x++;
    }
    return soma;
}

int main () {
    int x, k, n, soma;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite um numero para ser o multiplo de referencia: ");
    scanf("%d", &k);
    printf("Digite a quantidade de numeros a ser somado: ");
    scanf("%d", &n);
    printf("A soma dos %d termos multiplos de %d a partir de %d eh: %d", n, k, x, soma_especial(n, k, x));
}