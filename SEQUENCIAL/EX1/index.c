#include <stdio.h>
/*
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/


int main(){
    
    int a,b,temp;

    printf("Digite os valores das variaveis 'a' e 'b':\n");
    scanf("%d%d", &a,&b);
    
    temp=a;
    a=b; 
    b=temp;
   
    printf("Valor de a:%d\nValor de b:%d\n", a,b);

    return 0;

}