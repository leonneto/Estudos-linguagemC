#include <stdio.h>

/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos
*/

int main(){
    int num,i,positivo=0,negativo=0;


    printf("Digite 5 numeros inteiros:\n");

    for(i=0; i<5; i++){
        scanf("%d", &num);
    
    if(num<0){
        negativo++;
    }
    else if(num>0){
        positivo++;
    }
    }

    printf("Quantidade de numeros positivos:%d\n",positivo);
    printf("Quantidade de numeros negativos:%d\n",negativo);

    return 0;


}