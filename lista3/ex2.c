#include <stdio.h>

void fibonacci(int v[], int n) {
    int a = 1, b = 1, troca;
    for(int i = 0; i < n; i++) {
        if (i == 0) {
            v[i] = i+1;
        } else if (i == 1) {
            v[i] = i;
        } else {
            troca = a;
            a+=b;
            b = troca;
            v[i] = a;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }
}

int main() {
    int n;
    printf("Digite quantos termos da sequecia de Fibonacci voce deseja gerar: ");
    scanf("%d", &n);
    int v[n];
    fibonacci(v, n);
}