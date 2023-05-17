#include <stdio.h>


int main() {
    char caracter;

    printf("Digite um caractere: ");
    scanf(" %c", &caracter);

    
    if (caracter == 'a' || caracter == 'A' ||
        caracter == 'e' || caracter == 'E' ||
        caracter == 'i' || caracter == 'I' ||
        caracter == 'o' || caracter == 'O' ||
        caracter == 'u' || caracter == 'U') {
        printf("O caractere '%c' é uma vogal.\n", caracter);
    } else {
        printf("O caractere '%c' não é uma vogal.\n", caracter);
    }

    return 0;
}
