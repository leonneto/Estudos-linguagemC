#include <stdio.h>

/*
1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

int main() {
    int a, b, c,maior,menor;

    printf("Digite três valores inteiros:\n");
    scanf("%d%d%d", &a, &b, &c);
    maior = a; 

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }
    
    menor = a; 

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    printf("O maior valor digitado foi: %d\n", maior);
    printf("O menor valor digitado foi: %d\n", menor);

    return 0;
}
