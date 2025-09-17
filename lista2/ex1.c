#include <stdio.h>

int tipo_triangulo(float x, float y, float z) {
    if (x >= (y+z) || y >= (x+z) || z >= (x+y)) {
        return 0;
    } else if (x == y && y == z) {
        return 1;
    } else if (x == y || x == z || y == z) {
        return 2;
    } else {
        return 3;
    }
}


int main() {
    float x, y, z;
    int result_tipo_triangulo;
    printf("Digite os lados do triangulo: \n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    result_tipo_triangulo = tipo_triangulo(x, y, z);
    if (result_tipo_triangulo == 0) {
        printf("Os lados nao formam um triangulo.\n");
    } else if (result_tipo_triangulo == 1) {
        printf("Triangulo equilatero.\n");
    } else if (result_tipo_triangulo == 2) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }

    return 0;
}