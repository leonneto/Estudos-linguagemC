#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar
*/

int main() {
    int a, b;

    printf("Digite os valores das variaveis 'a' e 'b':\n");
    scanf("%d%d", &a, &b);

    printf("Valores originais: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Valores trocados: a = %d, b = %d\n", a, b);

    return 0;
}
