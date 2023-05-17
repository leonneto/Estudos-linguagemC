#include <stdio.h>

/*
8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

int main() {
    int mes;

    printf("Digite o número do mês: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3: 
        case 5: 
        case 7: 
        case 8:
        case 10: 
        case 12: 
            printf("O mês %d tem 31 dias.\n", mes);
            break;
        case 4: 
        case 6:
        case 9: 
        case 11: 
            printf("O mês %d tem 30 dias.\n", mes);
            break;
        case 2: 
            printf("O mês %d tem 28 dias.\n", mes);
            break;
        default:
            printf("Mês inválido.\n");
            break;
    }

    return 0;
}
