#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int opcaoComecar;
    int anos, meses, dias;

    //opções definidas
    int ano = 365, mes = 30;

    printf("Como funciona esse app? ");
    printf("Esse app é da seguinte forma, você irá informar sua idade expressa em (ANOS, MESES, DIAS), e diremos o total de dias vividos seus!");
    printf("\n\nPressione -1- para continuar: ");
    scanf("%d", &opcaoComecar);

    if(opcaoComecar == 1){
        system("cls");
        printf("Informe sua idade em anos: ");
        scanf("%d", &anos);
        printf("\nMeses: ");
        scanf("%d", &meses);
        printf("\nDias:  ");
        scanf("%d", &dias);

    } else {
        return 0;
    }

    system("cls");
     int totalDias = ((anos * ano) + (meses * mes)) + dias;
    printf("\nSeu total de dias vividos é --> %d\n", totalDias);

    return 0;
}

