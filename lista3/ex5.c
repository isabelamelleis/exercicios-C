#include <stdio.h>

int busca_seq_rec(int v[], int n, int chave) {
    if (n == 0) return -1;
    if (v[n - 1] == chave) return n - 1;
    return busca_seq_rec(v, n - 1, chave);
}

int main() {
    int n, chave;
    printf("Digite o tamanho que deseja para o vetor: ");
    scanf("%d", &n);
    
    int v[n];
    
    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave);
    
    int posicao = busca_seq_rec(v, n, chave);
    if (posicao == -1) {
        printf("Chave nao encontrada.\n"); 	
    } else {
        printf("Chave encontrada na posicao %d.\n", posicao);
    }
}