#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    printf("Este programa foi feito para calcular sua area!");
    printf("\nNos informe das medidas por favor!\n");

    float comprimento;
    float largura;

    printf("Comprimento: ");
    scanf("%f", &comprimento);
    printf("\nLargura: ");
    scanf("%f", &largura);

    float area = comprimento * largura;
    printf("\n\nComprimento --> %.2f",comprimento);
    printf("\nLargura --> %.2f", largura);
    printf("\nArea --> %.2f", area);

    return 0;
}
