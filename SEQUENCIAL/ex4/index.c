#include <stdio.h>

int main() {
    int valor = 45, dias;
    float quantliquid, imposto = 0.08; 

    printf("Digite o número de dias trabalhados pelo encanador:\n");
    scanf("%d", &dias);

    quantliquid = (dias * valor) * (1 - imposto); 

    printf("Número de dias trabalhados: %d\nValor líquido incluindo impostos: R$%.2f\n", dias, quantliquid);

    return 0;
}
