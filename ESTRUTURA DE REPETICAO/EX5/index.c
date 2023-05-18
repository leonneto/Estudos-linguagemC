/*
5) Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/
#include <stdio.h>

int main() {
    float nota1, nota2, media;


    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
        }
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
        }
    } while (nota2 < 0 || nota2 > 10);


    media = (nota1 + nota2) / 2;

    printf("A média semestral é: %.2f\n", media);

    return 0;
}
