#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double p1, p2, p3;

    //obtendo notas
    printf("Informe as notas para obter a média: ");
    printf("\nProva 1:  ");
    scanf("%lf", &p1);
    getchar();
    printf("\nProva 2:  ");
    scanf("%lf", &p2);
    getchar();
    printf("\nProva 3:  ");
    scanf("%lf", &p3);
    system("cls");

     double media = (p1 + p2 + (p3 * 2)) / 4;

    //mostrar valores inseridos
    printf("Prova 1 --> %.1lf", p1);
    printf("\nProva 2 --> %.1lf", p2);
    printf("\nProva 3 --> %.1lf", p3);
    printf("\nMédia ---> %.1lf", media);

    if(media >= 7){
        printf("\nVocê foi aprovado!");
    } else {
        printf("\nVocê está reprovado, média abaixo de 7,0");
    }



    return 0;
}
