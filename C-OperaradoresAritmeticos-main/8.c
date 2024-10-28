#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double salarioAtual;

    printf("* Percentual de reajusto 10% *\n");
    printf("\nOlá, me informe seu salario atual: ");
    scanf("%lf", &salarioAtual);

    system("cls");
    double novoSalario = salarioAtual + (salarioAtual * 0.1);
    printf("\n\nSeu salário Atual --> %.2lf", salarioAtual);
    printf("\nSeu novo salário após reajuste de 10%% --> %.2lf", novoSalario);

    return 0;
}
