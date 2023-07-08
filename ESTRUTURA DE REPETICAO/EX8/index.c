#include <stdio.h>
/*
8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar 
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair
Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a 
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida. 
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída)
*/

int main(){
    int opcao;
    float n1,n2;
    

    printf("Selecione uma opcao:\n");
    printf("1- Somar\n");
    printf("2- Subtrair\n");
    printf("3- Multiplicar\n");
    printf("4- Dividir\n");
    printf("0- Sair\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite os dois valores para saber a sua respectiva soma:\n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        
        printf("Resultado da soma: %.2f", n1 + n2);
        break;

    case 2:
      printf("Digite os dois valores para saber a sua respectiva subtracao:\n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        
        printf("Resultado da subtracao: %.2f", n1 - n2);
        break;
    
    case 3:
      printf("Digite os dois valores para saber a sua respectiva multiplicacao:\n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        
        printf("Resultado da multiplicacao: %.2f", n1 * n2);
        break;
    
    case 4:
      printf("Digite os dois valores para saber a sua respectiva divisao(o dividendo não pode ser zero):");
      while (n2 == 0) {
                    printf("Dividendo nao pode ser zero. Digite o segundo valor novamente:\n");
                    scanf("%f", &n2);
                }
             printf("Resultado da divisao: %.2f\n", n1 / n2);
                break;
    
     case 0:
                printf("Saindo...\n");
                break;
    default:
     printf("Opcao invalida. Tente novamente.\n");
        break;
    }while (opcao != 0);

    return 0;
}