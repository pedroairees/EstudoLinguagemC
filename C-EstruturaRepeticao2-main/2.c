#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int morador = 0;
    int elevadorA = 0, elevadorB = 0, elevadorC = 0;
    int matutino = 0, vespertino = 0, noturno = 0;
    char elevador;
    char periodo;
    int opcaoSair = 1;

    do{
        morador++;
        printf("Morador %d\n", morador);
        switch_elevador:
        printf("Qual elevador você mais ultiliza? (A, B, C) -->  ");
        scanf(" %c", &elevador);
        switch(elevador){
            case 'a':
            case 'A':
                elevadorA++;
                break;
            case 'b':
            case 'B':
                elevadorB++;
                break;
            case 'c':
            case 'C':
                elevadorC++;
                break;
            default:
                printf("\nInformação incorreta, tente novamente!\n");
                goto switch_elevador;
        }

        switch_periodo:
        printf("\nQual período mais ultiliza? (M - matutino,  V - vespertino,  N - Noturno) -->  ");
        scanf(" %c", &periodo);
        switch(periodo){
            case 'm':
            case 'M':
                matutino++;
                break;
            case 'v':
            case 'V':
                vespertino++;
                break;
            case 'n':
            case 'N':
                noturno++;
                break;
            default:
                printf("\nInformação incorreta, tente novamente!!\n");
                goto switch_periodo;
        }


        //continuar ou parar
        continuar_parar:
        printf("Deseja continuar ? (1 - sim   2 - não) -->  ");
        if(scanf("%d", &opcaoSair) != 1){
            printf("\nOpção invalida, digite ou 1 para CONTINUAR ou 2 para SAIR!!!\n");
            int c; //limpa o buff de entrada
            while((c = getchar()) != '\n' && c != EOF);
            goto continuar_parar;
        }
        switch(opcaoSair){
            case 1:
                opcaoSair = 1;
                break;
            case 2:
                opcaoSair = 2;
                break;
            default:
                printf("\nOpção invalida, digite ou 1 para CONTINUAR ou 2 para SAIR!!!\n");
                goto continuar_parar;
        }
        if(morador >= 50){
            opcaoSair = 2;
        }
    }while(opcaoSair == 1);


    char periodoMaisUsado[20] = "Matutino";
    int periodoMaisUsadoN = matutino;
    char elevadorMaisUsado[10] = "A";
    int elevadorMaisUsadoN = elevadorA;

    if(vespertino > periodoMaisUsadoN){
        if(elevadorB > elevadorMaisUsadoN){
            elevadorMaisUsadoN = elevadorB;
            strcpy(elevadorMaisUsado, "B");
        } else if(elevadorC > elevadorMaisUsadoN){
            elevadorMaisUsadoN = elevadorC;
            strcpy(elevadorMaisUsado, "C");
        }
        periodoMaisUsadoN = vespertino;
        strcpy(periodoMaisUsado, "Vespertino");
    } else if(noturno > periodoMaisUsadoN) {
        periodoMaisUsadoN = noturno;
        strcpy(periodoMaisUsado, "Noturno");
    }

    //menos usado
    int elevadorMenosUsadoN = matutino;
    char elevadorMenosUsado[20] = "A";
    if(elevadorB < elevadorMenosUsadoN){
        elevadorMenosUsadoN = elevadorB;
        strcpy(elevadorMenosUsado, "B");
    } else if(elevadorC < elevadorMenosUsadoN){
        elevadorMenosUsadoN = elevadorC;
        strcpy(elevadorMenosUsado, "C");
    }

    int totalDeVotos = elevadorA + elevadorB + elevadorC;
    double porcentMaisUsado = ((double)elevadorMaisUsadoN/totalDeVotos) * 100.0;
    double porcentMenosUsado = ((double)elevadorMenosUsadoN/totalDeVotos) *100.0;
    double difPercent = porcentMaisUsado - porcentMenosUsado;

    //mediaUltilização
    int elevadorMedioN = elevadorA;
    char elevadorMedio[20];
    if(elevadorA < elevadorMaisUsadoN && elevadorA > elevadorMenosUsadoN){
        elevadorMedioN = elevadorA;
        strcpy(elevadorMedio, "Elevador A");
    } else if(elevadorB < elevadorMaisUsadoN && elevadorB > elevadorMenosUsadoN){
        elevadorMedioN = elevadorB;
        strcpy(elevadorMedio, "Elevador B");
    } else if(elevadorC < elevadorMaisUsadoN && elevadorC > elevadorMenosUsadoN){
        elevadorMedioN = elevadorC;
        strcpy(elevadorMedio, "Elevador C");
    }

    double porcentElevadorMedio = ((double)elevadorMedioN/totalDeVotos) * 100.0;

    system("cls");
    printf("** Estátiticas **\n");
    printf("\nPeríodo mais usado --> %s. Se concentrou no elevador %s", periodoMaisUsado, elevadorMaisUsado);
    printf("\nDiferença de percentual do elevador mais usado: %s  e do menos usado: %s é --> %.2lf",elevadorMaisUsado, elevadorMenosUsado, difPercent);
    printf("\nPorcentagem do total de serviço do elevador medio: %s é --> %% %.2lf", elevadorMedio, porcentElevadorMedio);

    return 0;
}
