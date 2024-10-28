#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número INTEIRO e POSITIVO:  ");
    scanf("%d", &num);

    if(num < 0){
        system("cls");
        printf("%d não é um número INTEIRO ou Positivo!\n", num);
        printf("Tente novamente!");
    } else {
        system("cls");
        printf("Número --> %d ordem crescente!\n", num);
        for(int i = 1; i <= num; i++){
            printf("\n%d", i);
        }
    }

    return 0;
}
