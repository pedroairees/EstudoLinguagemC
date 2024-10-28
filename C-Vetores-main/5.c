#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int pares = 0;

    for(int i = 0; i < 10; i++){
        printf("\nPosição %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");
    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("Quantidade de pares --> %d", pares);


    return 0;
}
