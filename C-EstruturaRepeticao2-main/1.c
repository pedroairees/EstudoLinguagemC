#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int participantes = 1, opcaoSair = 1;
    int idade;
    char nota;
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    //otimo
    int maiorIdadeOtimo = 0;
    //pessimo
    int maiorIdadePessimo = 0;
    //ruim
    int idadeRuim = 0;
    int maiorIdadeRuim = 0;

    do{
        if(participantes >= 100){
            opcaoSair = 2;
        }

        printf("Cliente %d\n", participantes);
        printf("\nIdade -->  ");
        scanf("%d", &idade);

        printf("\n\nDê nota ao filme:\n");
        printf("A - Ótimo       B - Bom\n");
        printf("C - Regular     D - Ruim\n");
        printf("E - Péssimo\n");
        printf("\nNota --> ");
        scanf(" %c", &nota);

        switch_nota:
        switch(nota){
            case 'a':
            case 'A':
                otimo++;
                if(idade > maiorIdadeOtimo){
                    maiorIdadeOtimo = idade;
                }
                break;
            case 'b':
            case 'B':
                bom++;
                break;
            case 'c':
            case 'C':
                regular++;
                break;
            case 'd':
            case 'D':
                ruim++;
                idadeRuim += idade;
                if(idade > maiorIdadeRuim){
                    maiorIdadeRuim = idade;
                }
                break;
            case 'e':
            case 'E':
                pessimo++;
                if(idade > maiorIdadePessimo){
                    maiorIdadePessimo = idade;
                }
                break;
            default:
                participantes--;
                printf("\nResposta invalida, tente novamente!\n");
                break;
        }


        printf("Deseja sair? (1- sim  2- não):  ");
        scanf("%d", &opcaoSair);
        if(opcaoSair != 1){
            participantes--;
        }
        participantes++;
        system("cls");
    }while(opcaoSair == 1);

    double percentBomRegular = ((double)bom/(regular + bom)) * 100.0;
    if(bom == 0 && regular == 0){
        percentBomRegular = 0;
    }
    double mediaIdadeRuim = idadeRuim / (double)ruim;
    if(ruim == 0){
        mediaIdadeRuim = 0;
    }
    double porcentPessimo = ((double)pessimo/participantes) * 100.0;
    int difIdadeOR = maiorIdadeOtimo - maiorIdadeRuim;

    printf("Estátiticas:\n\n");
    printf("Numero total de participantes --> %d", participantes);
    printf("\nÓtimo --> %d", otimo);
    printf("\nPercentual entre Bom e Regular --> %.2lf%%", percentBomRegular);
    printf("\nMédia das idades que votaram ruim --> %.0lf", mediaIdadeRuim);
    printf("\nPorcentagem Pessimo --> %.0lf%%", porcentPessimo);
    printf("\nMaior idade que votou em Pessimo --> %d", maiorIdadePessimo);
    printf("\nDiferença de idade das maiores de Ótimo e Ruim --> %d", difIdadeOR);


    return 0;
}
