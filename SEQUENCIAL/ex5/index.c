#include <stdio.h>


/*
6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
*/

int main(){
   
   float reais,dolar;
   float taxa=5.3;

   printf("Digite o valor em reais para saber o correspondente em dolares:\n");
   scanf("%f",&reais);
   
   dolar= reais/taxa;

   printf("Valor em reais: R$%.2f", reais);
   printf("Valor em dolar: U$%.2f", dolar);

   return 0;




}