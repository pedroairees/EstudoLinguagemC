#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[8];
    int valorX, valorY;

    printf("Informe os valores:\n");
    for(int i = 0; i < 8; i++){
        printf("\nN�mero %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");
    printf("Informe a posi��o do n�meros:");
    printf("\nX --> ");
    scanf("%d", &valorX);
    printf("\nY --> ");
    scanf("%d", &valorY);

    int soma = vetor[valorX - 1] + vetor[valorY - 1];
    system("cls");
    printf("Valor da posi��o %d + posi��o %d -->  %d", valorX, valorY, soma);


    return 0;
}
