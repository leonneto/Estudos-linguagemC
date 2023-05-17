#include <stdio.h>

/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
   de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

int main(){

    int opcao;
    float valor,conversao;

    printf("Selecione uma opcao de conversao:\n");
    printf("1-Real para dolar\n");
    printf("2-Dolar para real\n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
        printf("Digite o valor em real para converter o valor:\n");
        scanf("%f", &valor);

        conversao= valor/5.3;
        printf("Valor em real:R$%.2f\nValor em Dolar:U$%.2f",valor,conversao);
        break;

        case 2:
        printf("Digite o valor em dolar para converter o valor:\n");
        scanf("%f", &valor);

        conversao= valor*5.3;
        printf("Valor em dolar:U$%.2f\nValor em real:R$%.2f",conversao,valor);
        break;

        default:
        printf("Valor invalido.\n");


    }

    return 0;

}