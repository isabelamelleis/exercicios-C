#include <stdio.h>

void busca_todos(int v[], int n, int chave, int indices[]) {
    int m = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == chave) {
            indices[m] = i;
            m++;
        }
    }

    for (; m < n; m++) {
        indices[m] = -1;
    }
}

int main() {
    int n, chave;
    printf("Digite o tamanho que deseja para o vetor: ");
    scanf("%d", &n);

    int v[n], indices[n];

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);    
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave);

    busca_todos(v, n, chave, indices);

    printf("indices = {");
    for (int i = 0; i < n; i++) {
        printf("%d", indices[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}