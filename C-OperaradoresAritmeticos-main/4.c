#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double valorInserido;
    double valorDollar = 4.91;

    printf("********************************\n");
    printf("* Converta seu reais em Dolarr *\n");
    printf("********************************\n");
    printf("\nEsse é a cotação do dollar atual --> %.2lf", valorDollar);
    printf("\nDigite o valor que deseja ser convertido para dollar:\n");
    printf("\n\nReal (R$): ");
    scanf("%lf", &valorInserido);

    double valorConvertido =  valorInserido / valorDollar;

    system("cls");
    printf("\nO valor de conversão de %.2lf para dollar --> %.2lf", valorInserido, valorConvertido);

    return 0;
}
