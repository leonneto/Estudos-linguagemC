#include <stdio.h>
//6) Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
int main() {
    int i;

    for (i = 1; i <= 9999; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
