#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    //iniciar aplica��o
    int iniciar;
    printf("Digite - 1 - para iniciar nova venda: ");
    scanf("%d", &iniciar);

    //variaveis
    double custoFabrica;

    if(iniciar == 1){
        system("cls");
        //custo f�brica
        printf("\nInsira o custo de f�brica: ");
        scanf("%lf", &custoFabrica);
    } else {
        return 0;
    }

    //percent distruidor 28%
    double percentDistribuidor = 0.28 * custoFabrica;
    //imposto
    double imposto = 0.45 * custoFabrica;
    //custo final
    double custoFinal = custoFabrica + percentDistribuidor + imposto;


    printf("\n\nStatus: ");
    printf("\nCusto f�brica --> %.2lf", custoFabrica);
    printf("\nPorcentagem do distribuidor --> %.2lf", percentDistribuidor);
    printf("\nImpostos --> %.2lf", imposto);
    printf("\nCUSTO FINAL --> %.2lf", custoFinal);

    return 0;
}
