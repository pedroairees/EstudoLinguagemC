#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int numerosInteiros[10];
    int maior = 0;
    int posicaoMaior = 0;

    for(int i = 0; i < 10; i++){
        printf("Posi��o %d --> ", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }

    system("cls");
    printf("Lista:\n");
    for(int i = 0; i < 10; i++){
        printf("\nPosi��o %d --> %d",i + 1, numerosInteiros[i]);
        if(numerosInteiros[i] > maior){
            maior = numerosInteiros[i];
            posicaoMaior = i + 1;
        }
    }

    printf("\n\nMaior n�mero --> %d , na posi��o --> %d ", maior, posicaoMaior);

    return 0;
}
