#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int negativos = 0;
    int somaPositivos = 0;
    for(int i = 0; i < 10; i++){
        printf("Posi��o %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");
    for(int i = 0; i < 10; i++){
        printf("\nPosi��o %d -->  %d", i + 1, vetor[i]);
        if(vetor[i] < 0){
            negativos++;
        } else{
            somaPositivos += vetor[i];
        }
    }

    printf("\n\nN�meros negativos --> %d", negativos);
    printf("\nSoma dos positivos --> %d", somaPositivos);

    return 0;
}
