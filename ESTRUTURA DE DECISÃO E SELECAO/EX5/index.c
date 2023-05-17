#include <stdio.h>

/*
5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC = m/h²). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de acordo
com a tabela abaixo:
IMC Interpretação
Menor que 18,5 Abaixo do peso
Entre 18,5 e menor que 25 Peso normal
Entre 25 e menor que 30 Sobrepeso
Entre 30 e menor que 35 Obesidade grau 1
Entre 35 e menor que 40 Obesidade grau 2
Maior ou igual a 40 Obesidade grau 3
*/

int main() {
    float peso, altura, imc;

    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu peso: %.2f kg\n", peso);
    printf("Sua altura: %.2f metros\n", altura);
    printf("Seu IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Interpretação: IMC menor que 18.5 - Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Interpretação: IMC entre 18.5 e menor que 25 - Peso normal\n");
    } else if (imc < 30) {
        printf("Interpretação: IMC entre 25 e menor que 30 - Sobrepeso\n");
    } else if (imc < 35) {
        printf("Interpretação: IMC entre 30 e menor que 35 - Obesidade grau 1\n");
    } else if (imc < 40) {
        printf("Interpretação: IMC entre 35 e menor que 40 - Obesidade grau 2\n");
    } else {
        printf("Interpretação: IMC maior ou igual a 40 - Obesidade grau 3\n");
    }

    return 0;
}
