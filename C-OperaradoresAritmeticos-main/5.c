#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double custoMercadoria, frete, despesasEventuais, valorVenda;

    //inserindo informações de valores total do produto
    printf("Olá, insira as informações:");
    printf("\nValor da mercadoria (R$): ");
    scanf("%lf", &custoMercadoria);
    printf("\nValor do frete (R$): ");
    scanf("%lf", &frete);
    printf("\nValor gasto em despesas Eventuais (R$): ");
    scanf("%lf", &despesasEventuais);

    //pegando o valor em que o produto será vendido
    printf("\nQual valor o produto será vendido (R$)? ");
    scanf("%lf", &valorVenda);

    double totalProduto = custoMercadoria + frete + despesasEventuais;
    double lucro = valorVenda - totalProduto;
    double porcentagemLucro = (lucro /  totalProduto) * 100;

    system("cls");
    printf("\n\nA porcentagem de lucro que você terá no produto é --> %%%.1lf", porcentagemLucro);

    return 0;
}
