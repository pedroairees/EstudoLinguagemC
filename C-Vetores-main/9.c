#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int pares[6];
    printf("Insira valores INTEIROS e PARES!\n");
    for(int i = 0; i < 6; i++){
        printf("\nPosição %d -->  ", i + 1);
        scanf("%d", &pares[i]);
        if(pares[i] % 2 != 0){
            printf("\nInforme um número POSITIVO e PAR por favor!");
            i--;
        }
    }

    system("cls");
    printf("ORDEM NORMAL:");
    for(int i = 0; i < 6; i++){
        printf("\nPosição %d -->  %d", i + 1, pares[i]);
    }

    printf("\n\nORDEM INVERSA:");
    for(int i = 5; i >= 0; i--){
        printf("\nPosição %d -->  %d", i + 1, pares[i]);
    }

    return 0;
}
