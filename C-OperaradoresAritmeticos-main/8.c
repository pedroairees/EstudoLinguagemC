#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double salarioAtual;

    printf("* Percentual de reajusto 10% *\n");
    printf("\nOl�, me informe seu salario atual: ");
    scanf("%lf", &salarioAtual);

    system("cls");
    double novoSalario = salarioAtual + (salarioAtual * 0.1);
    printf("\n\nSeu sal�rio Atual --> %.2lf", salarioAtual);
    printf("\nSeu novo sal�rio ap�s reajuste de 10%% --> %.2lf", novoSalario);

    return 0;
}
