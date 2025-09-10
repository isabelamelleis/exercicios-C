#include <stdio.h>
#include <math.h>

int menorQue0(int num) {
    do {
        printf("Digite um numero maior que 0: \n");
        scanf("%d", &num);
    } while (num < 1);
    return num;
}

// série harmônica
void questao1() {
    int numSerieHarmonica;
    float somaSerieHarmonica = 0;

    printf("Digite um numero para definir o numero \nde termos da serie harmonica a ser somado:\n");
    scanf("%d", &numSerieHarmonica);

    if (numSerieHarmonica < 1) {
        numSerieHarmonica = menorQue0(numSerieHarmonica);
    }

    for (int i = 1; i <= numSerieHarmonica; i++) {
        somaSerieHarmonica = somaSerieHarmonica + (1.0/i);
    }

    printf("A somatoria do(s) %d termo(s) eh de %f.\n", numSerieHarmonica, somaSerieHarmonica);
}

// ln(2)
void questao2() {
    int numLn2;
    float somaLn2;
     
    printf("Digite um numero para definir o numero de termos da serie a ser somado:\n");
    scanf("%d", &numLn2);

    if (numLn2 < 1) {
        numLn2 = menorQue0(numLn2);
    }

    for (int i = 1; i <= numLn2; i++) {
        somaLn2 = somaLn2 + pow(-1.0, i+1)/i;
    }

    printf("A somatoria do(s) %d termo(s) eh de %f.\n", numLn2, somaLn2);

}


// serie PI de Gregory-Leibniz
void questao3A() {
    int numPi1;
    float somaPi1 = 0;

    printf("Digite um numero para definir o numero de termos da serie PI a ser somado:\n");
    scanf("%d", &numPi1);

    if (numPi1 < 1) {
        numPi1 = menorQue0(numPi1);
    }

    for (int i = 0; i < numPi1; i++) {
        somaPi1 = somaPi1 + 4/(pow(-1.0, i) * (2*i + 1));
    }
 
    printf("A somatoria do(s) %d termo(s) eh de %f.\n", numPi1, somaPi1);
}

// serie PI de Nilakantha
void questao3B() {
    int numPi2;
    float somaPi2 = 3;

    printf("Digite um numero para definir o numero de termos da serie PI a ser somado:\n");
    scanf("%d", &numPi2);

    if (numPi2 < 1) {
        numPi2 = menorQue0(numPi2);
    }

    for (int i = 1; i <= numPi2; i++) {
        somaPi2 = somaPi2 + 4/(pow(-1.0, i+1) * ((2*i) * (2*i+1) * (2*i+2)));
    }
 
    printf("A somatoria do(s) %d termo(s) eh de %f.\n", numPi2, somaPi2);
}

// valor da constante 'e'
void questao4() {
    int numConstE;
    float somaConstE = 0;

    printf("Digite um numero para definir o numero de termos para somatorio da constante 'e':\n");
    scanf("%d", &numConstE);

    if (numConstE < 1) {
        numConstE = menorQue0(numConstE);
    }

    for(int i = 0 ; i <= numConstE ; i++) {
        float termo = 1;

        for(int j = 1 ; j <= i ; j++){
            termo = termo * 1/j;
        }
        somaConstE = somaConstE + termo;
    }
    printf("O valor da constante 'e' a partir do numero de termos digitados eh: %.5f\n", somaConstE);

}

// série de Taylor
void questao5() {
    int numConstE;
    float somaConstE = 0, x;

    printf("Digite um numero para definir o numero de termos para somatorio da constante 'e':\n");
    scanf("%d", &numConstE);

    if (numConstE < 1) {
        numConstE = menorQue0(numConstE);
    }

    printf("Digite um numero para ser o expoente da constante 'e':\n");
    scanf("%f", &x);

    for(int i = 0 ; i <= numConstE ; i++) {
        float termo = 1;

        for(int j = 1 ; j <= i ; j++){
            termo = termo * x/j;
        }
        somaConstE = somaConstE + termo;
    }
    printf("O valor da constante 'e' elevado a %.2f eh: %.5f\n", x, somaConstE);
}

// seno de x
void questao6() {
    int numSenX;
    float x, somaSenX, termo;

    printf("Digite um numero para definir o numero de termos para calcular o seno de x:\n");
    scanf("%d", &numSenX);

    if (numSenX < 1) {
        numSenX = menorQue0(numSenX);
    }

    printf("Digite um numero para ser o x:\n");
    scanf("%f", &x);

    termo = x;
    somaSenX = x;

    for (int i = 1; i < numSenX; i++) {
        termo *= -1 * x * x / ((2*i) * (2*i + 1));
        somaSenX += termo;
    }

    printf("O valor aproximado de seno de acordo com o x digitado eh: %.5f\n", somaSenX);

}

// cosseno de x
void questao7() {
    int numCosX;
    float x, somaCosX, termo;

    printf("Digite um numero para definir o numero de termos para calcular o cosseno de x:\n");
    scanf("%d", &numCosX);

    if (numCosX < 1) {
        numCosX = menorQue0(numCosX);
    }

    printf("Digite um numero para ser o x:\n");
    scanf("%f", &x);

    termo = 1.0;
    somaCosX = 1.0;

    for (int i = 1; i < numCosX; i++) {
        termo *= -1 * x * x / ((2*i - 1) * (2*i));
        somaCosX += termo;
    }

    printf("O valor aproximado de cosseno de acordo com o x digitado eh: %.5f\n", somaCosX);
}

int main() {
    questao1();
    questao2();
    questao3A();
    questao3B();
    questao4();
    questao5();
    questao6();
    questao7();
}