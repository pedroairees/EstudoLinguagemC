#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número (INTEIRO E POSITIVO):  ");
    scanf("%d", &num);

    if(num < 0){
        system("cls");
        printf("%d não é um numero INTEIRO ou POSITIVO, tente novamente colocando um número correto!", num);
    } else {
        system("cls");
        for(int i = 1; i <= num; i += 2){
            printf("\n%d", i);
        }
    }

    return 0;
}
