#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double custoMercadoria, frete, despesasEventuais, valorVenda;

    //inserindo informa��es de valores total do produto
    printf("Ol�, insira as informa��es:");
    printf("\nValor da mercadoria (R$): ");
    scanf("%lf", &custoMercadoria);
    printf("\nValor do frete (R$): ");
    scanf("%lf", &frete);
    printf("\nValor gasto em despesas Eventuais (R$): ");
    scanf("%lf", &despesasEventuais);

    //pegando o valor em que o produto ser� vendido
    printf("\nQual valor o produto ser� vendido (R$)? ");
    scanf("%lf", &valorVenda);

    double totalProduto = custoMercadoria + frete + despesasEventuais;
    double lucro = valorVenda - totalProduto;
    double porcentagemLucro = (lucro /  totalProduto) * 100;

    system("cls");
    printf("\n\nA porcentagem de lucro que voc� ter� no produto � --> %%%.1lf", porcentagemLucro);

    return 0;
}
