#include <stdio.h>

float coord1, coord2, a, b, c, valor1, valor2, valor3, mediaPonderada;
int inicioJogo, terminoJogo, duracaoJogo, numValores, pares, impares, positivos, negativos, quantImpares;

void questao1() {
        
    printf("\nDigite as coordenadas (x, y) de um ponto qualquer: \n");
    printf("Coordenada x: ");
    scanf("%f", &coord1);
    printf("Coordenada y: ");
    scanf("%f", &coord2);

    if ((coord1 == 0.0) && (coord2 == 0.0)) {
        printf("Origem\n");
    } else if (coord1 == 0.0) {
        printf("Eixo Y\n");
    } else if (coord2 == 0.0) {
        printf("Eixo X\n");
    } else if ((coord1 < 0.0) && (coord2 < 0.0)) {
        printf("Q3\n");
    } else if (coord2 < 0.0) {
        printf("Q4\n");
    } else if (coord1 < 0.0) {
        printf("Q2\n");
    } else {
        printf("Q1\n");
    }
}

void questao2() {
    printf("Digite as medidas do triangulo: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    while ((a <= 0) || (b <= 0) || (c <= 0)) {
        printf("Digite valores acima de 0 para as medidas do triangulo: \n");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
    }
    float organizar; 

    if (a < b) {
        organizar = a;
        a = b;
        b = organizar;
    }
    if (a < c) {
        organizar = a;
        a = c;
        c = organizar;
    }
    if (b < c) {
        organizar = b;
        b = c;
        c = organizar;
    }

    if (a >= b + c) {
        printf("Nao forma triangulo.\n");
    } else {
        if (a == b && a == c) {
            printf("Triangulo equilatero.\n");
        } else if (a == b || b == c || a == c) {
            printf("Triangulo isosceles.\n");
        }
        if (a*a == b*b + c*c) {
            printf("Triangulo retangulo.\n");
        }
        if (a*a > b*b + c*c) {
            printf("Triangulo obtusangulo.\n");
        }
        if (a*a < b*b + c*c) {
            printf("Triangulo acutangulo.\n");
        }
    }
    
}

void questao3() {
    printf("Digite a hora que o jogo iniciou: ");
    scanf("%d", &inicioJogo);
    printf("Digite a hora que o jogo terminou: ");
    scanf("%d", &terminoJogo);

    if (inicioJogo < terminoJogo) {
        for(int i = inicioJogo; i < terminoJogo; i++) {
            duracaoJogo++;
        }
    } else {
        for(int i = inicioJogo; i < 24; i++) {
            duracaoJogo++;
        }
        duracaoJogo = duracaoJogo + terminoJogo;
    }

    printf("O jogo durou %d hora(s).\n", duracaoJogo);
}

void questao4() {
    printf("Quantos valores voce deseja verificar? ");
    scanf("%d", &numValores);
    int valores[numValores];

    printf("Digite os %d valores: \n", numValores);
    for(int i = 0; i < numValores; i++) {
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < numValores; i++) {
        if (valores[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        if (valores[i] < 0) {
            negativos++;
        } else if (valores[i] != 0) {
            positivos++;
        }
    }
    printf("%d valor(es) par(es).\n", pares);
    printf("%d valor(es) impar(es).\n", impares);
    printf("%d valor(es) positivo(s).\n", positivos);
    printf("%d valor(es) negativo(s).\n", negativos);
}

void questao5() {
    int casosTeste;
    printf("Quantos casos de teste voce deseja fazer? ");
    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i++) {
        printf("Digite os 3 valores para calcular a %dº média ponderada: \n", i+1);
        scanf("%f", &valor1);
        scanf("%f", &valor2);
        scanf("%f", &valor3);
        mediaPonderada = ((valor1*2) + (valor2*3) + (valor3*5))/10;
        printf("\nMedia ponderada entre os três valores acima: %.1f\n\n", mediaPonderada);
    }
    
}

void questao6() {
    int organizar, x, y;
    printf("Digite dois números inteiros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        organizar = x;
        x = y;
        y = organizar;
    }

    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            quantImpares += i;
        }
    }

    printf("Somatoria de todos os impares entre os numeros digitados: %d\n", quantImpares);
}

void questao7() {
    int casosTeste, x, y, organizar;
    printf("Quantos casos de teste voce deseja fazer? ");
    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i++) {
        printf("Digite dois números inteiros: \n");
        scanf("%d", &x);
        scanf("%d", &y);
        quantImpares = 0;

        if (x > y) {
            organizar = x;
            x = y;
            y = organizar;
        }

        for (int i = x+1; i < y; i++) {
            if (i % 2 != 0) {
                quantImpares += i;
            }
        }

        printf("Somatoria de todos os impares entre os numeros digitados: %d\n\n", quantImpares);
    }

}

int main() {

    questao1();
    questao2();
    questao3();
    questao4();
    questao5();
    questao6();
    questao7();
}
