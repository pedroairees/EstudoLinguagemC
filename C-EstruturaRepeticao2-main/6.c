#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int mesAno;
    int mes, ano;
    int diasMes = 0;
    int opcaoSair = 1;
    while(opcaoSair == 1){
        printf("Deseja saber um m�s ou ano? (1 - m�s  2 - ano) --> ");
        scanf("%d", &mesAno);
        if(mesAno == 1){
            printf("\nInsira um m�s (Exemplo: 9) -->");
            scanf("%d", &mes);
                if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                    diasMes = 31;
                } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                    diasMes = 30;
                } else if(mes == 2){
                    diasMes = 28;
                }
            printf("\nO m�s %d possui %d dias", mes, diasMes);
        } else {
            printf("\nInsira um ano (Exemplo: 2024) --> ");
            scanf("%d", &ano);
            if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
                printf("\nO ano de %d � bissexto!", ano);
            } else {
                printf("\nO ano de %d n�o � bissexto", ano);
            }
        }
        printf("\nDeseja fazer outra pesquisa? (1 - sim  2 - n�o) -->");
        scanf("%d", &opcaoSair);
    }




    return 0;
}
