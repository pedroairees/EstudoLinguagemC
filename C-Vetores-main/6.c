#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int maior = 0, menor = 999999;
    int vetor[10];
    for(int i = 0; i < 10; i++){
        printf("Posição %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    system("cls");
    printf("Maior --> %d", maior);
    printf("\nMenor --> %d", menor);


    return 0;
}
