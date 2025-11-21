#include <stdio.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ) {
    int m, n;
    *pMin = mat[0][0];
    *pI = 0;
    *pJ = 0;
    for(m = 1; m < 3; m++) {
        for(n = 0; n < 4; n++) {
            if(mat[m][n] < *pMin) {
                *pMin = mat[m][n];
                *pI = m;
                *pJ = n;
            }
        }
    }
}

int main()
{
    int i, j, m, n;
    float mat[3][4], valorMin;
    for(m = 0; m < 3; m++) {
        printf("Digite os numeros da %dº linha: ", m+1);
            for(n = 0; n < 4; n++){
                scanf("%f", &mat[m][n]);
            }
    }
    min_matriz(mat, &valorMin, &i, &j);
    
    printf("\nMenor numero = %.2f \nCoordenadas: [%d][%d]", valorMin, i, j);
    
    return 0;
}