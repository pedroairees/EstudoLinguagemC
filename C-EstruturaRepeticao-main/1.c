#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero INTEIRO e POSITIVO:  ");
    scanf("%d", &num);

    if(num < 0){
        system("cls");
        printf("%d n�o � um n�mero INTEIRO ou Positivo!\n", num);
        printf("Tente novamente!");
    } else {
        system("cls");
        printf("N�mero --> %d ordem crescente!\n", num);
        for(int i = 1; i <= num; i++){
            printf("\n%d", i);
        }
    }

    return 0;
}
