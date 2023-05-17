#include <stdio.h>

/*
10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos dos lados de um triângulo.
    Caso positivo, seu programa deve informar também se o triângulo é equilátero, isósceles ou escaleno.
    Caso contrário, seu programa deve escrever a mensagem “Não formam um triângulo”.
*/

int main() {
    float a, b, c;

    printf("Digite os comprimentos dos lados do triângulo:\n");
    printf("Lado a: ");
    scanf("%f", &a);
    printf("Lado b: ");
    scanf("%f", &b);
    printf("Lado c: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Os lados formam um triângulo equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Os lados formam um triângulo isósceles.\n");
        } else {
            printf("Os lados formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os lados não formam um triângulo.\n");
    }

    return 0;
}
