#include <stdio.h>
#include <math.h>


int hiper(int n) {
    int hiperf = 1;
	for(; n >= 1; n--) {
		hiperf *= (pow((n-1), (n-1)) * pow(n, n));
	}
	return hiperf;
}


int maximo_produto(int v[], int n) {
	int i, maiorP = 0, contadora;
	for(i = 0; i <= n-2; i++) {
		contadora = 0;
		contadora = v[i] * v[i+1];
		if(i == 0) {
		    maiorP = contadora;
		}
		if(contadora > maiorP) {
			maiorP = contadora;
		}
	}
	return maiorP;
}


void menores_precos(int m, int n, float mat[m][n], float vet[n]) {
	int i, j, linha = 0, somaLinha = 0, soma = 0;
	for(i = 0; i < m; i++) {
	    somaLinha = 0;
		for(j = 0; j < n; j++) {
			somaLinha += mat[i][j];
		}
		if(i == 0) {
			soma = somaLinha;
			linha = 0;
		}
		if(somaLinha < soma) {
			soma = somaLinha;
			linha = i;
		}
	}
	for(i = 0; i < n; i++) {
	    vet[i] = mat[linha][i];
	}
	
	printf("vet = {");
	for(int k = 0; k < n; k++) {
		printf("%.2f ", vet[k]);
	}
	printf("}");
}


void copia_vogais(char orig[], char dest[]) {
	int i, j, k = 0;
	char vogais[] = "AEIOUaeiou";
	for(i = 0; orig[i] != '\0'; i++) {
		for(j = 0; vogais[j] != '\0'; j++) {
		    if(orig[i] == vogais[j]) {
		        dest[k] = orig[i];
		        k++;
		    }
		}
	}
	dest[k] = '\0';
	printf("%s", dest);
}


void copia_pares_impares(int v[], int n, int vp[], int vi[]) {
    int i, j = 0, k = 0;
    for(i = 0; i < n; i++) {
        if(v[i] % 2 == 0) {
            vp[j] = v[i];
            j++;
        } else {
            vi[k] = v[i];
            k++;
        }
    }
    vp[j] = -1;
    vi[k] = -1;
    
    // print do vetor dos pares
    printf("{");
    for(i = 0; i <= j; i++) {
        printf("%d ", vi[i]);
    }
    printf("}");

}


void max_lin(int mat[LIN][COL], int vet[COL]) {
    int i, j, maiorV = mat[0][0], linha = 0;
    for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            if(mat[i][j] > maiorV) {
                maiorV = mat[i][j];
                linha = i;
            }
        }
    }
    for(i = 0; i < COL; i++) {
        vet[i] = mat[linha][i];
    }
    
    printf("{");
    for(i = 0; i < COL; i++) {
        printf(" %d", vet[i]);
    }
    printf("}");
}
