#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[5];
    int maior = 0, menor = 99999;
    double media = 0;
    int total = 0;
    for(int i = 0; i < 5; i++){
        printf("\nPosição %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");
    for(int i = 0; i < 5; i++){
        printf("\nPosição %d -->  %d", i + 1, vetor[i]);
        total += vetor[i];
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    media = (double)total / 5.0;

    printf("\n\nMaior -->  %d", maior);
    printf("\nMenor --> %d", menor);
    printf("\nMédia --> %.1lf", media);

    return 0;
}
