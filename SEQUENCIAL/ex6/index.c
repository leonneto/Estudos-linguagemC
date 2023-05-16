#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; // Obtém a quantidade de horas
    resto = segundos % 3600; // Obtém o resto dos segundos após a conversão em horas

    minutos = resto / 60; // Obtém a quantidade de minutos
    segundos = resto % 60; // Obtém o resto dos segundos após a conversão em minutos

    printf("Tempo convertido: %d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
