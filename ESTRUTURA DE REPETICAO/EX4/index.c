/*
4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 veze
*/


#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 1;
    int contador = 0;

    while (numero <= 1000 && contador < 500) {
        if (numero % 2 != 0) {
            soma += numero;
        }
        numero++;
        contador++;
    }

    printf("A soma dos números ímpares entre 1 e 1000 é: %d\n", soma);

    return 0;
}
