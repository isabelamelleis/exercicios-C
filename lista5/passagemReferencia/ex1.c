#include <stdio.h>

// aqui não estamos recebendo uma variável normal, mas sim um endereço de memória
void inc_dec (int *a, int *b) {
    // fazendo um printf("%d", a) vai printar o endereço de memória, e não o conteúdo da variável
    // isso pq o endereço de memória é que está sendo passado como parâmetro para a função
    
    (*a)++;
    (*b)--;
}

int main()
{
    int a, b;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    inc_dec(&a, &b);
    printf("Valor de 'a' = %d e valor de 'b' = %d.", a, b);
    
    return 0;
}