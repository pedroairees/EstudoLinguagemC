#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero INTEIRO POSITIVO: ");
    scanf("%d", &num);

    if(num < 0){
        printf("\n\nTente novamente, e digite um n�mero INTEIRO e POSITIVO!");
    } else {
        for(; num >= 0; num--){
            printf("\n%d", num);
        }
    }

    return 0;
}
