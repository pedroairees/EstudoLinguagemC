#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int carrosVendidos;
    double valorVendas;
    double salarioFixo = 1800;

    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("\nValor total de vendas: ");
    scanf("%lf", &valorVendas);

    double comissao = 0.05 * valorVendas;
    double salarioTotal = salarioFixo + comissao;

    system("cls");
    printf("\nStatus:\n");
    printf("\nTotal de carros vendidos --> %d", carrosVendidos);
    printf("\nValor total de vendas --> R$%.2lf", valorVendas);
    printf("\nComissão de 5%% das vendas --> %.2lf", comissao);
    printf("\nSALÁRIO TOTAL A RECEBER --> %.2lf", salarioTotal);

    return 0;
}
