#include <stdio.h>

/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
*/
int main(){
    char tMedia;
    float notaA,notaB,notaC;

    printf("Digite a primeira nota: ");
    scanf("%f", &notaA);

    printf("Digite a segunda nota: ");
    scanf("%f", &notaB);

    printf("Digite a terceira nota: ");
    scanf("%f", &notaC);

    printf("Escolha o tipo de media que deseja calcular:\n");
    printf("a- Aritmetica\nb- Ponderada");

    switch(tMedia){
        case 'a':
        case 'A':
        tMedia = (notaA + notaB + notaC) / 3.0;
            printf("A media aritmetica e: %.2f\n", tMedia);

        break;

        case 'p':
        case 'P':

        tMedia = (notaA * 3.0 + notaB * 3.0 + notaC * 4.0) / 10.0;
            printf("A media ponderada e: %.2f\n", tMedia);
            break;

        default:
           printf("Opcao invalida.");
           break;
    }

    return 0;
}