#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[6];
    for(int i = 0; i < 6; i++){
        printf("\nPosição %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");

    printf("ORDEM NORMAL:");
    for(int i = 0; i < 6; i++){
        printf("\nPosição %d --> %d", i + 1, vetor[i]);
    }
    printf("\n\nORDEM INVERSA:");
    for(int i = 5; i >= 0; i--){
        printf("\nPosição %d --> %d", i + 1, vetor[i]);
    }

    return 0;
}
