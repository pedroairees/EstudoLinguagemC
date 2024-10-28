#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double salarioAtual;
    int tempoDeServico;

    printf("Insira as informações:\n");
    printf("Salário Atual:  ");
    scanf("%lf", &salarioAtual);
    printf("\nTempo de Serviço (em anos):  ");
    scanf("%d", &tempoDeServico);

    system("cls");
    printf("DADOS: ");
    printf("\nSalário atual --> %.3lf", salarioAtual);
    printf("\nTempo de Serviço --> %d", tempoDeServico);

    double novoSalario = 0;
    double bonus = 0;

    //REAJUSTE SALARIO
    if(salarioAtual <= 500){
        novoSalario = salarioAtual + (salarioAtual * 0.25);
    } else if(salarioAtual > 500 && salarioAtual <= 1000){
        novoSalario = salarioAtual + (salarioAtual * 0.20);
    } else if(salarioAtual > 1000 && salarioAtual <= 1500){
        novoSalario = salarioAtual + (salarioAtual * 0.15);
    } else if(salarioAtual > 1500 && salarioAtual <= 2000){
        novoSalario = salarioAtual + (salarioAtual * 0.10);
    } else if(salarioAtual > 2000){
        novoSalario =  salarioAtual;
    }
    //BONUS
    if(tempoDeServico < 1){
        bonus = 0;
    } else if(tempoDeServico >= 1 && tempoDeServico <= 3){
        bonus = 100;
    } else if(tempoDeServico >= 4 && tempoDeServico <= 6){
        bonus = 200;
    } else if(tempoDeServico >= 7 && tempoDeServico <= 10){
        bonus = 300;
    } else if(tempoDeServico > 10){
        bonus = 500;
    }

    novoSalario = novoSalario + bonus;

    printf("\n\nSeu novo salário --> %.3lf", novoSalario);

    return 0;
}
