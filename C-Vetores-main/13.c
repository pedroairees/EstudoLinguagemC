#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int numeros[5];
    int maior = 0; int menor = 9999;
    int maiorPosi = 0; int menorPosi = 10;

    for(int i = 0; i < 5; i++){
        printf("\nPosi��o %d -->  ", i + 1);
        scanf("%d", &numeros[i]);
    }

    system("cls");
    for(int i = 0; i < 5; i++){
        printf("\nPosi��o %d --> %d", i + 1, numeros[i]);
        if(numeros[i] > maior){
            maior = numeros[i];
            maiorPosi = i + 1;
        }
        if(numeros[i] < menor){
            menor = numeros[i];
            menorPosi = i + 1;
        }
    }

    printf("\n\nMaior n�mero --> %d na posi��o %d", maior, maiorPosi);
    printf("\nMenor n�mero --> %d na posi��o %d", menor, menorPosi);

    return 0;
}
