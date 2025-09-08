// rever: questao1 tem que ter uma casa decimal apenas

#include <stdio.h>

float coord1, coord2, a, b, c, organizar;
int inicioJogo, terminoJogo, duracaoJogo, numValores;


void questao1() {
        
    printf("\nDigite as coordenadas (x, y) de um ponto qualquer: \n");
    printf("Coordenada x: ");
    scanf("%f", &coord1);
    printf("Coordenada y: ");
    scanf("%f", &coord2);

    if ((coord1 == 0.0) && (coord2 == 0.0)) {
        printf("Origem");
    } else if (coord1 == 0.0) {
        printf("Eixo Y");
    } else if (coord2 == 0.0) {
        printf("Eixo X");
    } else if ((coord1 < 0.0) && (coord2 < 0.0)) {
        printf("Q3");
    } else if (coord2 < 0.0) {
        printf("Q4");
    } else if (coord1 < 0.0) {
        printf("Q2");
    } else {
        printf("Q1");
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
        printf("Nao forma triangulo.");
    } else {
        if (a == b && a == c) {
            printf("Triangulo equilatero.\n");
        } else if (a == b || b == c || a == c) {
            printf("Triangulo isosceles.\n");
        }
        if (a*a == b*b + c*c) {
            printf("Triangulo retangulo.");
        }
        if (a*a > b*b + c*c) {
            printf("Triangulo obtusangulo.");
        }
        if (a*a < b*b + c*c) {
            printf("Triangulo acutangulo.");
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

    printf("O jogo durou %d hora(s).", duracaoJogo);
}

void questao4() {
    printf("Quantos valores voce deseja verificar? ");
    scanf("%d", &numValores);
    int valores[numValores];

    printf("Digite os %d valores: \n", numValores);
    for(int i = 0; i < numValores; i++) {
        scanf("%d", &valores[i]);
    }
}

int main() {

    //questao1();
    //questao2();
    //questao3();
    questao4();
}