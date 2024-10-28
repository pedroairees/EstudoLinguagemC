#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("\nVocê é menor de 18 anos, portanto não pode beber bebidas alcoolicas!");
    } else {
        printf("\nVocê é maior de 18 anos, aproveite!");
    }

    return 0;
}
