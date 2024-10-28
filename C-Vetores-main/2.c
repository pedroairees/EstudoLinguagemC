#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("\nPosicao %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");

    printf("Estatiticas:\n");
    for(int o = 0; o < 6; o++){
        printf("\nPosicao %d --> %d", o + 1, vetor[o]);
    }

    return 0;
}
