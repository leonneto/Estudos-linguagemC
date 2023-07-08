#include <stdio.h>
//7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, 
//inclusive N, se for o caso.
int main() {
    int N, i;

    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    printf("Quadrados dos valores pares de 1 a %d:\n", N);
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}
