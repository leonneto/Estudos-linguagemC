#include <stdio.h>

/*
) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

int main() {
    float despesa, gorjeta, valor_total;
    int num_pessoas;

    printf("Digite o valor da despesa: ");
    scanf("%f", &despesa);

    printf("Digite o valor da gorjeta: ");
    scanf("%f", &gorjeta);

    printf("Digite o número de pessoas para dividir a conta: ");
    scanf("%d", &num_pessoas);

    valor_total = despesa + (despesa * gorjeta / 100.0);

    float valor_por_pessoa = valor_total / num_pessoas;

    printf("Valor total a ser pago: %.2f\n", valor_total);
    printf("Valor que cada pessoa deve pagar: %.2f\n", valor_por_pessoa);

    return 0;
}