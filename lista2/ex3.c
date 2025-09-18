#include <stdio.h>

int ehDigito (char a) {
    int digito;
    if (a >= '0' && a <= '9') {
        digito = a - '0';
        return digito;
    } else {
        return -1;
    }
}

int main () {
    char a;
    int digito;
    printf("Digite algum caracter: \n");
    scanf("%c", &a);
    digito = ehDigito(a);
    if (digito == -1) {
        printf("O caracter digitado nao eh um numero de 0 a 9.");
    } else {
        printf("O caracter digitado eh o numero %d.", digito);
    }

    return 0;
}