#include <stdio.h>

int fibo (int n) {
    int a = 1, b = 1, proxNum;

    if (n == 1 || n == 2) {
        return 1;
    }  

    for (int i = 3; i <= n; i++) {
        proxNum = a + b;
        a = b;
        b = proxNum;
    }

    return b;
}

int main () {
    int n;
    printf("Digite quantos termos da sequencia de Fibonacci voce deseja: ");
    scanf("%d", &n);
    printf("\nSequencia de Fibonacci ate o %d termo:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", fibo(i));
    }
}