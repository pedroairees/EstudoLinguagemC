#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double notas[15];
    double totalNota = 0, media = 0;

    for(int i = 0; i < 15; i++){
        printf("\nAluno %d --> ", i + 1);
        scanf("%lf", &notas[i]);
        totalNota += notas[i];
    }
    system("cls");

    printf("Notas:");
    for(int i = 0; i < 15; i++){
        printf("\nAluno %d -->  %.1lf", i + 1, notas[i]);
    }

    media = totalNota / 15;
    printf("\n\nNota Total --> %.1lf", totalNota);
    printf("\nMédia -->  %.1lf", media);


    return 0;
}
